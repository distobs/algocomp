#include <stdlib.h>
#include "stack.h"

/* stack_destroy:
 * This function "destroys" the stack, freeing its contents and resetting its
 * original values. */
void
stack_destroy(struct stack *s)
{
	s->sp = -1;
	s->size = 0;
	free(s->stk);
	s->stk = NULL;
}

/* stack_empty:
 * This function returns true if the stack pointer == -1, indicating that the
 * stack is empty */
int
stack_empty(struct stack *s)
{
	return (s->sp == -1);
}

/* stack_enough:
 * This function returns true if there is enough space to push 'needed' values,
 * and false otherwise. */
int
stack_enough(struct stack *s, unsigned needed)
{
	return (s->sp >= (needed - 1));
}

/* stack_head:
 * This function returns the value at the top of the stack. */
int
stack_head(struct stack *s)
{
	return (s->stk[s->sp]);
}

/* stack_grow:
 * This function is used internally by this file only, by the stack_push
 * function when the stack happens to be full. It allocates more space for the
 * stack contents, and returns -1 if the allocation fails, and 0 otherwise. */
static int
stack_grow(struct stack *s)
{
	s->stk = realloc(s->stk, (s->size += GROW_BY) * sizeof(s->stk[0]));

	return (s->stk == NULL) ? -1 : 0;
}

/* stack_init:
 * This function sets the default values for the stack: NULL for the contents,
 * 0 for the size, -1 for the stack pointer. */
void
stack_init(struct stack *s)
{
	s->stk = NULL;
	s->size = 0;
	s->sp = -1;
}

/* stack_pop:
 * Does a pop operation on the s stack. Stores the popped value inside val, if
 * val != NULL. Returns -1 if the stack is empty, and 0 otherwise. */
int
stack_pop(struct stack *s, int *val)
{
	if (stack_empty(s))
		return -1;

	if (val != NULL) {
		*val = s->stk[s->sp];
	}

	--s->sp;

	return 0;
}

/* stack_push:
 * Pushes val onto the s stack. Returns -1 if a failed allocation happens, and
 * 0 otherwise. The return value of this function should be checked even if
 * there's guaranteed space for pushing a value (for example: when popping and
 * pushing again), for consistency and safety. */
int
stack_push(struct stack *s, int val)
{
	if (s->size == 0 || s->sp == (s->size - 1)) {
		if (stack_grow(s) == -1) {
			return -1;
		}
	}

	++s->sp;
	s->stk[s->sp] = val;

	return 0;
}

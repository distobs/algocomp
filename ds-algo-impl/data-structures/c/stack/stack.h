#ifndef STACK_H
#define STACK_H

#include <sys/types.h>

/* How much space to realloc if the stack is full. */
#define GROW_BY 50

struct stack {
	int	*stk;	/* The stack. */
	ssize_t	 sp;	/* The stack pointer. -1 if the stack is empty. */
	size_t	 size;	/* The size allocated for the stack. */
};

void	stack_destroy(struct stack *s);
int	stack_empty(struct stack *s);
int	stack_enough(struct stack *s, unsigned needed);
int	stack_head(struct stack *s);
void	stack_init(struct stack *s);
int	stack_pop(struct stack *s, int *val);
int	stack_push(struct stack *s, int val);

#endif

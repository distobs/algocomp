#include <stdlib.h>
#include <string.h>
#include "bintree.h"

void
tinit(struct tree *t)
{
	t->size = 0;
	t->root = NULL;
}

void
tkill(struct tree *t)
{
	tdleft(t, NULL);

	memset(t, 0, sizeof(struct tree));
}

int
tileft(struct tree *t, struct node *n, int data)
{
	struct node *new, **pos;

	if (n == NULL) {
		if (t->size > 0) {
			return -1;
		}

		pos = &t->root;
	} else {
		if (n->l != NULL) {
			return -1;
		}

		pos = &n->l;
	}

	if ((new = malloc(sizeof(struct tree))) == NULL) {
		return -1;
	}

	new->val = data;
	new->l = NULL;
	new->r = NULL;
	*pos = new;

	++t->size;

	return 0;
}

int
tiright(struct tree *t, struct node *n, int data)
{
	struct node *new, **pos;

	if (n == NULL) {
		if (t->size > 0) {
			return -1;
		}

		pos = &t->root;
	} else {
		if (n->r != NULL) {
			return -1;
		}

		pos = &n->r;
	}

	if ((new = malloc(sizeof(struct tree))) == NULL) {
		return -1;
	}

	new->val = data;
	new->l = NULL;
	new->r = NULL;
	*pos = new;

	++t->size;

	return 0;
}

void
tdleft(struct tree *t, struct node *n)
{
	if (t->size > 0) {
		return;
	}

	struct node **pos;

	if (n == NULL) {
		pos = &t->root;
	} else {
		pos = &n->l;
	}

	if (*pos != NULL) {
		tdleft(t, *pos);
		tdright(t, *pos);

		free(*pos);
		*pos = NULL;

		--t->size;
	}
}

void
tdright(struct tree *t, struct node *n)
{
	struct node **pos;

	if (t->size == 0) {
		return;
	}

	if (n == NULL) {
		pos = &t->root;
	} else {
		pos = &n->r;
	}

	if (*pos != NULL) {
		tdleft(t, *pos);
		tdright(t, *pos);

		free(*pos);
		*pos = NULL;
		--t->size;
	}
}

int
tmerge(struct tree *t, struct tree *l, struct tree *r, int vr)
{
	tinit(t);

	if (tileft(t, NULL, vr) != 0) {
		tkill(t);
		return -1;
	}

	t->root->l = l->root;
	t->root->r = r->root;

	t->size = t->size + l->size + r->size;

	l->root = r->root = NULL;
	l->size = r->size = 0.;

	return 0;
}

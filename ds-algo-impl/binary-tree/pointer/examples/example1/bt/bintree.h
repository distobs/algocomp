/* The whole implementation is based on "Mastering Algorithms with C" by Kyle
 * Loundon */
#ifndef BINTREE_H
#define BINTREE_H

#include <stddef.h>

struct node {
	int val;
	struct node *l, *r;
};

struct tree {
	struct node *root;
	size_t size;
};

void tinit(struct tree *t);
void tkill(struct tree *t);
int tileft(struct tree *t, struct node *n, int data);
int tiright(struct tree *t, struct node *n, int data);
void tdleft(struct tree *t, struct node *n);
void tdright(struct tree *t, struct node *n);
int tmerge(struct tree *m, struct tree *l, struct tree *r, int vr);

#endif

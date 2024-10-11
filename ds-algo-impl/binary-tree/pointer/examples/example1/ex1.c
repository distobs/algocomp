#include <stdio.h>
#include "bt/bintree.h"

void
visit(struct node *n)
{
	printf("%d, ", n->val);
}

void
inorder(struct node *n)
{
	if (n == NULL) {
		return;
	}

	inorder(n->l);
	visit(n);
	inorder(n->r);
}

void
postorder(struct node *n)
{
	if (n == NULL) {
		return;
	}

	postorder(n->l);
	postorder(n->r);
	visit(n);
}

void
preorder(struct node *n)
{
	if (n == NULL) {
		return;
	}

	visit(n);
	preorder(n->l);
	preorder(n->r);
}

void
tvisit(char op, struct tree *t)
{
	putchar('{');
	switch (op) {
	case 'i':
		inorder(t->root);
		break;
	case 'o':
		postorder(t->root);
		break;
	case 'r':
		preorder(t->root);
		break;
	default:
		break;
	}

	fputs("}\n", stdout);
}

int
main(void)
{
	struct tree t;

	tinit(&t);

	// conciseness? never heard of him.
	tileft(&t, NULL, 1);

	/*
	  1
	  /   \
	  2     3
	*/
	tileft(&t, t.root, 2);
	tiright(&t, t.root, 3);

	/*
	  1
	  /   \
	  2     3
	  / \
	  4   5
	*/
	  
	tileft(&t, t.root->l, 4);
	tiright(&t, t.root->l, 5);

	/*
	  1
	  /   \
	  2     3
	  / \   / \
	  4   5 6   7
	*/
	tileft(&t, t.root->r, 6);
	tiright(&t, t.root->r, 7);

	char c;

	do {
		printf("(i) - inorder\n(o) - postorder\n(r) - preorder\n"
		       "(q) - quit\n-> ");

		scanf(" %c", &c);

		tvisit(c, &t);
	} while (c != 'q');

	return 0;
}

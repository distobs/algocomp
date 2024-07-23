/* código horrível, runtime medíocre, mas passei. */

void
ll_add_nxt (struct ListNode *node, int n)
{
  node->next = malloc (sizeof (*node));

  node->next->val = n;
  node->next->next = NULL;
}

struct ListNode *
addTwoNumbers (struct ListNode *l1, struct ListNode *l2)
{
  int v, v1, v2, carry = 0;
  struct ListNode *lhead = malloc (sizeof (*l1));
  lhead->next = NULL;
  struct ListNode *tmp = lhead;

  v1 = l1->val;
  v2 = l2->val;

  v = v1 + v2 + carry;

  if (v >= 10)
   {
    carry = 1;
    v -= 10;
   }
  tmp->val = v;

  l1 = l1->next;
  l2 = l2->next;

  while (l1 != NULL || l2 != NULL || carry != 0)
    {
      v1 = (l1 == NULL) ? 0 : l1->val;
      v2 = (l2 == NULL) ? 0 : l2->val;

      v = v1 + v2 + carry;

      if (v >= 10)
       {
        carry = 1;
        v -= 10;
       } else carry = 0;

      ll_add_nxt (tmp, v);

      tmp = tmp->next;
      l1 = (l1 == NULL) ? l1 : l1->next;
      l2 = (l2 == NULL) ? l2 : l2->next;
    }

  return lhead;
}

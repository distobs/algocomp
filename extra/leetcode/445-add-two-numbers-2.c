/* runtime vergonhoso */

int stk1[100], stk2[100], stk3[100];
int sp1, sp2, sp3;

void
ltostk(int stk[static 100], int *sp, struct ListNode *head)
{
    while (head != NULL) {
        stk[++(*sp)]  = head->val;
        head = head->next;
        printf("ltostk sp %d stk[sp] %d\n", *sp, stk[*sp]);
    }
}

struct ListNode *
stktol(int stk[static 100], int sp)
{
    struct ListNode *head = malloc(sizeof(*head));
    head->val = stk[sp--];
    head->next = NULL;
    struct ListNode *tmp = head;

    while (sp >= 0) {
        printf("stk[sp] = %d; sp = %d\n", stk[sp], sp);
        tmp->next = malloc(sizeof(*tmp));
        tmp->next->val = stk[sp--];
        tmp->next->next = NULL;
        tmp = tmp->next;
    }

//    tmp = NULL;
    return head;
}

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    sp1 = sp2 = sp3 = -1;
    ltostk(stk1, &sp1, l1);
    ltostk(stk2, &sp2, l2);

    int v = 0, v1 = 0, v2 = 0, carry = 0;

    printf("first %d\n", sp3);
    while (sp1 >= 0 || sp2 >= 0 || carry != 0) {
        printf("start of while: v1 %d v2 %d v %d carry %d sp1 %d sp2 %d sp3 %d\n",
        v1, v2, v, carry, sp1, sp2, sp3);
        if (sp1 == -1) {
            v1 = 0;
        } else {
            v1 = stk1[sp1--];
        }

        if (sp2 == -1) {
            v2 = 0;
        } else {
            v2 = stk2[sp2--];
        }

        v  = v1 + v2 + carry;

        if (v >= 10) {
            v = v - 10;
            carry = 1;
        } else carry = 0;

        sp3 += 1;
        stk3[sp3] = v;
        printf("end of while: v1 %d v2 %d v %d carry %d sp1 %d sp2 %d sp3 %d\n",
        v1, v2, v, carry, sp1, sp2, sp3);
    }

    return stktol(stk3, sp3);
}

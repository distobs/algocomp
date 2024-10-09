// https://leetcode.com/problems/evaluate-reverse-polish-notation/

int sp = -1;
int stk[10000];

void
spush(int n)
{
	stk[++sp] = n;
}

int
spop(void)
{
	return stk[sp--];
}

int
stoi(char *s, int n, int *i)
{
	int neg = 0;
	int res = 0;

	if (s[*i] == '-') {
		neg = 1;
		++(*i);
	}

	for (; *i < n; ++(*i)) {
		res = res * 10 + (s[*i] - '0');
	}

	return (neg) ? (-1 * res) : (res);
}

void
do_str(char *s, int n)
{
	int n1, n2;

	for (int i = 0; i < n; ++i) {
		if ((s[i] == '-' && i != n - 1 && isdigit(s[i + 1])) || isdigit(s[i])) {
			spush(stoi(s, n, &i));
		} else {
			n1 = spop();
			n2 = spop();

			switch (s[i]) {
			case '+':
				spush(n2 + n1);
				break;
			case '-':
				spush(n2 - n1);
				break;
			case '*':
				spush(n2 * n1);
				break;
			case '/':
				spush(n2 / n1);
				break;
			}
		}
	}
}

int
evalRPN(char **tok, int ts)
{
	for (int i = 0; i < ts; ++i) {
		do_str(tok[i], strlen(tok[i]));
	}

	return stk[sp];
}

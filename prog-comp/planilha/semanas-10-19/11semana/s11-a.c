int
passThePillow(int n, int t)
{
	if (t < n) {
		return t + 1;
	} else {
		int extra = t % (n - 1); /* had to use leet's help with this
					    one */
		if (((t / (n - 1)) % 2) == 0) {
			return extra + 1;
		} else {
			return n - extra;
		}
	}
}

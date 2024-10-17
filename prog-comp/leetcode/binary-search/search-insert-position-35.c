int
searchInsert(int *nums, int ns, int t)
{
	int ans;
	int l = 0;
	int r = ns - 1;
	int m;

	while (1) {
		m = (l + r) / 2;

		if (nums[m] > t) {
			r = m - 1;
		} else if (nums[m] < t) {
			l = m + 1;
		} else {
			return m;
		}

		m = (l + r) / 2;

		if (l > r) {
			return m + (nums[m] > t) ? -1 : 1;
		}
	}
}

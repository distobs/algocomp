#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

double
minimumAverage(vector <int> &nums)
{
	int lower = 0;
	int upper = nums.size() - 1;

	sort(nums.begin(), nums.end());

	double minavg = (double)(nums[lower] + nums[upper]) / 2.0;
	double tmpavg = 0;

	while (lower < upper) {
		tmpavg = (double)(nums[lower] + nums[upper]) / 2.0;

		if (tmpavg < minavg) {
			minavg = tmpavg;
		}

		lower += 1;
		upper -= 1;
	}

	return minavg;
}

int
main(void)
{
	vector <int> n = {1, 9, 8, 3, 10, 5};

	cout << minimumAverage(n);

	return 0;
}

#include <bits/stdc++.h>

using namespace std;

vector <int>
twoSum(vector <int> &nums, int target)
{
	vector <int> res(2);

	for (int i = 0; i < nums.size(); ++i) {
		for (int j = (i + 1); j < nums.size(); ++j) {
			if (nums[i] + nums[j] == target) {
				res[0] = i;
				res[1] = j;
				break;
			}
		}
	}

	return res;
}

int
main(void)
{
	vector <int> testcase = {3, 3};
	vector <int> res = twoSum(testcase, 6);

	for (int i : res) {
		cout << i << endl;
	}

	return 0;
}

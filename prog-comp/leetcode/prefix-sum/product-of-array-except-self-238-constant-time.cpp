// https://leetcode.com/problems/product-of-array-except-self/
// Followup: his solution runs in constant time (O(1)).
// Thanks to my man:
// https://leetcode.com/problems/product-of-array-except-self/solutions/65782/c-solution-constant-space-with-explanation/

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
	vector<int>
	productExceptSelf(vector<int> &nums)
	{
		int n = nums.size();
		
		vector<int> answer(n, 1);
		int left = 1;

		for (int i = n - 2; i >= 0; --i) {
			// create the right vector in-place
			answer[i] = answer[i + 1] * nums[i + 1];
		}

		for (int i = 0; i < n; ++i) {
			answer[i] = answer[i] * left;
			// multiply the left as we go
			left = left * nums[i];
		}

		return answer;
	}
};

// https://leetcode.com/problems/contains-duplicate/

class Solution {
	public:
		bool containsDuplicate(vector<int> &nums)
		{
			unordered_map<int, int> appeared;

			for (int el : nums) {
				if (appeared.find(el) != appeared.end()) {
					return true;
				} else {
					appeared[el] = 1;
				}
			}

			return false;
		}
};

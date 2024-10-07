// https://leetcode.com/problems/contains-duplicate/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int n = nums.size();
        int prev = nums[0];

        for (int i = 1; i < n; ++i) {
            if (nums[i] == prev) {
                return true;
            }

            prev = nums[i];
        }

        return false;
    }
};

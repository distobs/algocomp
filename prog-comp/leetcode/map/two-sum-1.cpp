// https://leetcode.com/problems/two-sum/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size(), comp;
        unordered_map<int, int> idx;

        for (int i = 0; i < n; ++i) {
            comp = target - nums[i];

            if (idx.find(comp) != idx.end()) {
                return {idx[comp], i};
            } else {
                idx[nums[i]] = i;
            }
        }

        return {0, 0};
    }
};

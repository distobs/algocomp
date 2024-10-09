// https://leetcode.com/problems/top-k-frequent-elements/description/?source=submission-ac

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> res(k);
        vector<pair<int, int>> freq;
        vector<int> v(k);
        unordered_map<int, int> idx;

        for (int el : nums) {
            if (idx.find(el) == idx.end()) {
                freq.push_back({1, el});
                idx[el] = freq.size() - 1;
            } else {
                ++(freq[idx[el]].first);
            }
        }

        sort(freq.rbegin(), freq.rend());

        for (int i = 0; i < k; ++i) {
            v[i] = freq[i].second;
        }

        return v;
    }
};

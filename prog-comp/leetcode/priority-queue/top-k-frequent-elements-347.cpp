// https://leetcode.com/problems/top-k-frequent-elements/editorial/
// Stole this solution from the editorial for learning purposes, since my last
// solution was not exactly the most performant one.

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
	vector<int>
	topKFrequent(vector<int> &nums, int k)
	{
		// gotta go fast
		if (k == nums.size()) {
			return nums;
		}

		map<int, int> count_map; // frequency counter

		for (int el : nums) {
			count_map[el] += 1; // maps are initialized to 0
		}

		// lambda function for comparison between elements in the map
		auto comp = [&count_map](int n1, int n2)
		{
			// sorts by frequency (least frequent on top of heap)
			return count_map[n1] > count_map[n2];
		};

		priority_queue<int, vector<int>, decltype(comp)> heap(comp);

		for (pair<int, int> p : count_map) {
			heap.push(p.first);
			// remove least frequent element on top
			if (heap.size() > k) heap.pop();
		}

		// stores the top elements
		vector<int> top(k);

		for (int i = k - 1; i >= 0; --i) {
			top[i] = heap.top();
			heap.pop();
		}

		return top;
	}
};

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
	vector<string>
	findRelativeRanks(vector<int> &score)
	{
		int n = score.size();
		vector<string> ans(n);
		priority_queue<pair<int, int>> rank;

		for (int i = 0; i < n; ++i) {
			rank.push({score[i], i});
		}

		pair<int, int> tmp1;
		string tmp2;
		for (int i = 0; i < n; ++i) {
			tmp1 = rank.top();

			switch (i) {
			case 0:
				tmp2 = "Gold Medal";
				break;
			case 1:
				tmp2 = "Silver Medal";
				break;
			case 2:
				tmp2 = "Bronze Medal";
				break;
			default:
				tmp2 = to_string(i + 1);
				break;
			}

			ans[tmp1.second] = tmp2;

			rank.pop();
		}

		return ans;
	}
};

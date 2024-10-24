#include <bits/stdc++.h>

using namespace std;

void
dfs(vector<vector<int>> &adj, vector<bool> &vis, int s)
{
	vis[s] = true;

	cout << s << "; ";

	for (int el : adj[s]) {
		if (!vis[el]) {
			dfs(adj, vis, el);
		}
	}
}

// dfs on a graph not guaranteed to be connected
int
main(void)
{
	/*
	    2 -- 0 -- 1
            |         |
	    3         4 --- 5 --- 6

	    7 -- 8

	    9
	 */
	vector<vector<int>> adj = {
		{1, 2}, // 0
		{0, 4}, // 1
		{0, 3}, // 2
		{2},	// 3
		{1, 5}, // 4
		{4, 6}, // 5
		{5},	// 6
		{8},    // 7
		{7},    // 8
		{},     // 9
	};

	vector<bool> vis(adj.size(), false);

	for (int i = 0; i < adj.size(); ++i) {
		if (!vis[i]) {
			cout << "lonely: " << i << endl;

			dfs(adj, vis, i);
			cout << endl;
		}
	}

	return 0;
}

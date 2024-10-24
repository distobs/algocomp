#include <bits/stdc++.h>

using namespace std;

void
dfs(vector<vector<int>> &adj, vector<bool> &visited, int s)
{
	visited[s] = true;

	cout << s << " ";

	for (int el : adj[s]) {
		if (!visited[el]) {
			dfs(adj, visited, el);
		}
	}
}

int
main(void)
{
	/*
	                    0
			  /   \
			 2     1
			  \   / 
			    3
			     
	 */
	vector<vector<int>> adj = {
		{1, 2},		// 0
		{0, 3},		// 1
		{0, 3},      	// 2
		{1, 2},		// 3
	};

	vector<bool> vis(adj.size(), false);

	int s = 0;

	cout << "src: " << s << endl;

	dfs(adj, vis, s);

	cout << endl;

	return 0;
}

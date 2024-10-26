#include <bits/stdc++.h>

using namespace std;

void
bfs(vector<vector<int>> &g, vector<bool> &vis, int vini)
{
	queue<int> q;

	q.push(vini);

	int v;

	while (!q.empty()) {
		v = q.front();
		q.pop();

		if (!vis[v]) {
			cout << v << "; ";
			vis[v] = true;

			for (int el : g[v]) {
				if (!vis[el]) {
					q.push(el);
				}
			}
		}
	}

	cout << endl;
}

// bfs on possibly disconnected graph
int
main(void)
{
	/*
	                0
		       / \
		     1     2              12 --- 13
		    / \   / \              \     |
		   3   4 5   6              14--15
		  /    |      \
		 7--8--9--10--11
	 */
	// hope this is right
	vector<vector<int>> graph = {
		{1, 2},		// 0
		{0, 3, 4},	// 1
		{0, 5, 6},	// 2
		{1, 7},		// 3
		{1, 9},		// 4
		{2},		// 5
		{2, 11},	// 6
		{3, 8},		// 7
		{7, 9},		// 8
		{8, 4, 10},	// 9
		{9, 11},	// 10
		{10, 6},	// 11
		{13, 14},	// 12
		{12, 15},	// 13
		{12, 15},	// 14
		{13, 14},	// 15
	};

	vector<bool> vis(graph.size(), false);

	for (int i = 0; i < graph.size(); ++i) {
		if (!vis[i]) {
			bfs(graph, vis, i);
		}
	}

	return 0;
}

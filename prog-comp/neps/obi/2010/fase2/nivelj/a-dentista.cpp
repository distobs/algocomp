// https://neps.academy/br/exercise/248

#include <bits/stdc++.h>

using namespace std;

bool
compare(pair<int, int> a, pair<int, int> b)
{
	return a.second < b.second;
}

int
main(void)
{
	int n, livre = 0, ans = 0;

	cin >> n;

	vector<pair<int, int>> consultas(n);

	for (int i = 0; i < n; ++i) {
		cin >> consultas[i].first >> consultas[i].second;
	}

	sort(consultas.begin(), consultas.end(), compare);

	for (int i = 0; i < n; ++i) {
		if (consultas[i].first >= livre) {
			++ans;
			livre = consultas[i].second;
		}
	}

	printf("%d\n", ans);

	return 0;
}

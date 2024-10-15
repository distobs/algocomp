#include <cstdio>
#include <vector>

using namespace std;

int
main(void)
{
	int n;
	char tmp;

	scanf("%d", &n);

	vector<bool> seats(n);

	for (int i = 0; i < n; ++i) {
		scanf(" %c", &tmp);

		seats[i] = (tmp == '#');
	}

	int i = 0;
	int ans = 0;

	while ((i + 2) < n) {
		if (seats[i] && !seats[i + 1] && seats[i + 2]) {
			++ans;
		}

		++i;
	}

	printf("%d\n", ans);

	return 0;
}

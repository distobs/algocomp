#include <iostream>

using namespace std;

int
main(void)
{
	size_t	n;
	char	c, last;
	size_t	lcount;

	cin >> n;

	cin >> c;
	last = c;
	lcount = 1;
	for (size_t i = 1; i < n; ++i) {
		cin >> c;

		if (c == last) {
			++lcount;
		} else {
			cout << lcount << " " << last << " ";
			last = c;
			lcount = 1;
		}
	}

	cout << lcount << " " << c << "\n";

	return 0;
}

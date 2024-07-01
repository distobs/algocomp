#include <iostream>
#include <cstddef>

using namespace std;

size_t
add_digits(size_t n)
{
	size_t sdig = 0;

	while (n != 0) {
		sdig += n % 10;
		n /= 10;
	}

	return sdig;
}

int
main(void)
{
	size_t upper, lower, target;

	cin >> lower >> upper >> target;

	for (size_t i = upper; i >= lower; --i) {
		if (add_digits(i) == target) {
			cout << i << "\n";
			return 0;
		}
	}

	cout << -1 << "\n";

	return 0;
}

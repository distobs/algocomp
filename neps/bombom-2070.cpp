#include <iostream>
#include <cstddef>
#include <string>

using namespace std;

int
main(void)
{
	string input;
	char dom;
	size_t soma_luana, soma_edu;
	soma_luana = soma_edu = 0;

	cin >> input;

	dom = input[1];

	for (size_t i = 0; i < 3; ++i) {
		cin >> input;
		switch (input[0]) {
			case 'A':
				soma_luana += 10 + ((input[1] == dom) ? 4 : 0);
				break;
			case 'J':
				soma_luana += 11 + ((input[1] == dom) ? 4 : 0);
				break;
			case 'Q':
				soma_luana += 12 + ((input[1] == dom) ? 4 : 0);
				break;
			case 'K':
				soma_luana += 13 + ((input[1] == dom) ? 4 : 0);
				break;
		}
	}

	for (size_t i = 0; i < 3; ++i) {
		cin >> input;
		switch (input[0]) {
			case 'A':
				soma_edu += 10 + ((input[1] == dom) ? 4 : 0);
				break;
			case 'J':
				soma_edu += 11 + ((input[1] == dom) ? 4 : 0);
				break;
			case 'Q':
				soma_edu += 12 + ((input[1] == dom) ? 4 : 0);
				break;
			case 'K':
				soma_edu += 13 + ((input[1] == dom) ? 4 : 0);
				break;
		}
	}

	cout << ((soma_edu > soma_luana) ? "Edu\n" : (soma_edu == soma_luana) ?
		"empate\n" : "Luana\n");

	return 0;
}

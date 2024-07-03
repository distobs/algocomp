#include <stdio.h>

int
main(void)
{
	unsigned count = 0;
	unsigned flavio[6], loteria[6];

	for (unsigned i = 0; i < 6; ++i) {
		scanf("%u", &flavio[i]);
	}

	for (unsigned i = 0; i < 6; ++i) {
		scanf("%u", &loteria[i]);

		for (unsigned j = 0; j < 6; ++j) {
			if (loteria[i] == flavio[j]) {
				++count;
			}
		}
	}

	switch (count) {
	case 0:
	case 1:
	case 2:
		puts("azar");
		break;
	case 3:
		puts("terno");
		break;
	case 4:
		puts("quadra");
		break;
	case 5:
		puts("quina");
		break;
	case 6:
		puts("sena");
		break;
	}

	return 0;
}

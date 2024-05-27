#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

#define _GNU_SOURCE

#define SEARCH	1
#define FOUND	0

int
main(void)
{
	char *line = NULL;
	char *pattern = NULL;
	size_t linesz = 0;
	size_t patsz = 0;

	ssize_t line_len = getline(&line, &linesz, stdin);
	ssize_t patt_len = getline(&pattern, &patsz, stdin);

	line_len -= 1;
	patt_len -= 1;

	size_t match = 0;
	int state = SEARCH;
	for (size_t i = 0; i < line_len; ++i) {
		if (line[i] == ' ') {
			state = SEARCH;
		} if (state == SEARCH) {
			for (size_t j = 0; j < patt_len; ++j) {
				if (line[i] == pattern[j]) {
					++match;
					state = FOUND;
				}
			}
		}
	}

	printf("%zu\n", match);

	free(line);
	free(pattern);

	return 0;
}

#include <stdio.h>

#define X 0
#define Y 1

void
set_next_pos(int xmax, int ymax, int matrix[ymax+1][xmax+1], int *saida_pos)
{
	if (saida_pos[X] < xmax && matrix[saida_pos[Y]][saida_pos[X] + 1]
	    == 1) {
		++saida_pos[X];
	} else if (saida_pos[X] > 0 && matrix[saida_pos[Y]][saida_pos[X] - 1]
		   == 1) {
		--saida_pos[X];
	} else if (saida_pos[Y] < ymax &&
		   matrix[saida_pos[Y] + 1][saida_pos[X]] == 1) {
		++saida_pos[Y];
	} else if (saida_pos[Y] > 0 && matrix[saida_pos[Y] - 1][saida_pos[X]]
		   == 1) {
		--saida_pos[Y];
	}
}

int
main(void)
{
	int mx, my, xmax, ymax;
	int emilia_pos[2];
	int saida_pos[2];

	scanf("%d %d", &my, &mx);

	int mapa[my][mx];

	xmax = mx - 1;
	ymax = my - 1;

	for (int i = 0; i < my; ++i) {
		for (int j = 0; j < mx; ++j) {
			scanf("%d", &mapa[i][j]);
			if (mapa[i][j] == 3) {
				saida_pos[X] = j;
				saida_pos[Y] = i;
			} else if (mapa[i][j] == 2) {
				emilia_pos[X] = j;
				emilia_pos[Y] = i;
			}
		}
	}

	int movs = 0;

	while ((saida_pos[X] * saida_pos[Y]) != (emilia_pos[X] * emilia_pos[Y])) {
		printf("saida: (%d, %d), emilia: (%d, %d)\n",
		       saida_pos[0], saida_pos[1], emilia_pos[0], emilia_pos[1]);
		set_next_pos(xmax, ymax, mapa, saida_pos);
		printf("saida: (%d, %d), emilia: (%d, %d)\n",
		       saida_pos[0], saida_pos[1], emilia_pos[0], emilia_pos[1]);
		++movs;
	}

	printf("%d\n", movs);

	return 0;
}

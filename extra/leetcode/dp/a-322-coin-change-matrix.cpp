/* Solução com array 2d/tabela:
 * https://leetcode.com/problems/coin-change/submissions/1405280832 */
/* Obrigado, esse cara aqui:
 * https://www.youtube.com/watch?v=x-QkFoh-i5Y
 */

#include <bits/stdc++.h>

using namespace std;

int
cc(vector<int> coins, int amount)
{
	/* Linha extra porque a lógica envolve consultar o valor acima.
	 * Coluna extra porque a gente tem que contar o zero nos resultados. */
	vector<vector<int>> dp(coins.size() + 1, vector<int>(amount + 1));

	/* Na linha 1, fazemos um min com a linha 0. */
	for (int i = 0; i < amount + 1; ++i) {
		dp[0][i] = INT_MAX - 1;
	}

	for (int i = 1; i < dp.size(); ++i) {
		dp[i][0] = 0; /* Precisa-se de zero moedas para fazer zero. */

		for (int j = 1; j < dp[0].size(); ++j) {
			/* A moeda "em que estamos" é maior que o valor "em que
			 * estamos"? */
			if (coins[i - 1] > j) {
				/* Se sim, não podemos usar a moeda "em que
				 * estamos, porque passaria, e devemos repetir
				 * o valor da moeda anterior. */
				dp[i][j] = dp[i-1][j];
			} else {
				/* Senão:
				 *
				 * 1. Comparamos o valor encontrado usando
				 * apenas as moedas "descobertas" até a moeda
				 * anterior, e a quantidade que queremos menos
				 * a moeda atual, com 1 somado. Escolhemos a
				 * menor opção. */
				dp[i][j] = min(dp[i - 1][j],
						dp[i][j - coins[i - 1]] + 1);
			}
		}
	}

	/* Retornamos -1 se nada for achado. Retornamos o melhor valor caso
	 * contrário. */
	return (dp[coins.size()][amount] >= INT_MAX - 1) ?
		-1 : dp[coins.size()][amount];
}

/* Solução com array 1d:
 * https://leetcode.com/problems/coin-change/submissions/1405280832 */
/* Obrigado, G4G:
 * geeksforgeeks.org/find-minimum-number-of-coins-that-make-a-change
 */

#include <bits/stdc++.h>

using namespace std;

int
cc(vector<int> coins, int sum)
{
	const int ncn = coins.size();
	const int imx = INT_MAX - 1;

	/* Extra space for the base case where sum = 0. */
	vector<int> table(sum + 1);

	/* table[i] = min amount of coins to make i */
	table[0] = 0;

	for (int i = 1; i <= sum; ++i) {
		table[i] = imx;
	}

	/* loop through amounts */
	for (int i = 1; i <= sum; ++i) {
		/* loop through coins */
		for (int j = 0; j < ncn; ++j) {
			/* if the current coin is smaller than the amount */
			if (coins[j] <= i) {
				 /* min amount needed to make
				  * current amount - current coin
				  *
				  * plus 1 coin */
				int res = table[i - coins[j]] + 1;

				if (res != imx && res < table[i]) {
					table[i] = res;
				}
			} /* otherwise, keep INFINITY */
		}
	}

	return (table[sum] == imx) ? -1 : table[sum];
}

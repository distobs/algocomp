#define LOCAL

#ifdef LOCAL
#include <bits/stdc++.h>

using namespace std;
#endif

class Solution {
public:
	bool
	isPalindrome(string s)
	{
		string a = "", b = "";

		int i, j;

		i = 0; j = s.size() - 1;

		while (j >= i) {
			if (isalnum(s[j]) && isalnum(s[i])) {
				a.push_back(tolower(s[j]));
				b.push_back(tolower(s[i]));
			}

			++i; --j;
		}

		return a == b;
	}
};

#ifdef LOCAL
int
main(void)
{
	string s;

	getline(cin, s);

	class Solution sol;

	cout << s << endl;
	cout << sol.isPalindrome(s) << endl;

	return 0;
}
#endif

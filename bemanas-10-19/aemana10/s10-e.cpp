class Solution {
public:
    bool isUgly(int n) {
        if (n <= 0) {
            return false;
        } else if (n <= 5) {
            return true;
        }

        while (1) {
                while (n % 2 == 0) {
                        n /= 2;
                }

                while (n % 3 == 0) {
                        n /= 3;
                }

                while (n % 5 == 0) {
                        n /= 5;
                }

                if (n == 1) {
                        break;
                } else if (n % 2 != 0 && n % 3 != 0 && n % 5 != 0) {
                        return false;
                }
        }

        return true;
    }
};

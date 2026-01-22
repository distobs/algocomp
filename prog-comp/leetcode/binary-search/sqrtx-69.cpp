class Solution {
public:
    int mySqrt(int x) {
        #define int unsigned long long
        int l = 0, r = x;
        int cons;

        while (l <= r) {
            int m = (l + r) / 2;
            int tmp = m * m;
            if (tmp > x) {
                r = m - 1;
            } else {
                if (tmp == x) return m;
                l = m + 1;
                cons = m;
            }
        }

        #undef int
        return cons;
    }
};

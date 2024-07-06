int trib[38] = {
        [0] = 0,
        [1] = 1,
        [2] = 1
};

int
tribonacci(int n)
{
        unsigned i = 3;

        if (n == 0) return 0;
        else if (n == 1 || n == 2) return 1;

        while (i <= n) {
                trib[i] = trib[i - 1] + trib[i - 2] + trib[i - 3];
                ++i;
        }

        return trib[i - 1];
}

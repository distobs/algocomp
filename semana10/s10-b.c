int
tribonacci(int n)
{
    if (n == 0) return n;
    else if (n == 1 || n == 2) return 1;

    return tribonacci(n - 1) + tribonacci(n - 2) + tribonacci(n - 3);
}

#include <stdio.h>

int
digsum (int n)
{
  int sum = 0;

  while (n)
    {
      sum += n % 10;
      n /= 10;
    }

  return sum;
}

int
main (void)
{
  int t, n;

  scanf ("%d", &t);

  for (int i = 0; i < t; ++i)
    {
      scanf ("%d", &n);

      printf ("%d\n", digsum (n));
    }

  return 0;
}

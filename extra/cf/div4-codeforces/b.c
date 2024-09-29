#include <stdio.h>

int
main (void)
{
  int t, a, b, c, d, wins = 0;

  scanf ("%d", &t);

  for (int i = 0; i < t; ++i)
    {
      scanf ("%d %d %d %d", &a, &b, &c, &d);

      if (a >= c)
	{
	  if (b >= d)
	    {
	      if (b > d || a > c)
		{
		  ++wins;
		}
	    }
	}

      if (a >= d)
	{
	  if (b >= c)
	    {
	      if (b > c || a > d)
		{
		  ++wins;
		}
	    }
	}

      if (b >= c)
	{
	  if (a >= d)
	    {
	      if (a > d || b > c)
		{
		  ++wins;
		}
	    }
	}

      if (b >= d)
	{
	  if (a >= c)
	    {
	      if (a > c || b > d)
		{
		  ++wins;
		}
	    }
	}

      printf ("%d\n", wins);
      wins = 0;
    }

  return 0;
}

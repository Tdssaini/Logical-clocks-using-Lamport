#include<stdio.h>
int
main ()
{
  int noOfEvents, i, m1, m21, m23, m3, d = 3, startingClock = 1;
  printf ("\nEnter the no of events for p1, p2 and p3\n");
  scanf ("%d", &noOfEvents);
  int size = noOfEvents + 1;
  int p1[size], p2[size], p3[size];
  printf ("\n enter the event of p1 which will send msg to P2\n");
  scanf ("%d", &m1);
  printf ("\n enter the event of p2 which will receive the msg from p1\n");
  scanf ("%d", &m21);
  printf ("\n enter the event of p3 which will send msg to P2\n");
  scanf ("%d", &m3);
  printf ("\n enter the event of p2 which will receive the msg from p3\n");
  scanf ("%d", &m23);
  p1[0] = startingClock;
  p2[0] = startingClock;
  p3[0] = startingClock;
  for (i = 1; i <= noOfEvents; i++)
    {
      p1[i] = p1[i - 1] + d;
      p3[i] = p3[i - 1] + d;
      if (i == m21 && p1[m1] > p2[i - 1])
	{
	  p2[i] = p1[m1] + d;
	}
      else if (i == m23 && p3[m3] > p2[i - 1])
	{
	  p2[i] = p3[m3] + d;
	}
      else
	{
	  p2[i] = p2[i - 1] + d;
	}
    }
  printf ("\nTime stamp for P1\n");
  for (i = 1; i <= noOfEvents; i++)
    {
      printf ("%d ", p1[i]);
    }
  printf ("\nTime stamp for P2\n");
  for (i = 1; i <= noOfEvents; i++)
    {
      printf ("%d ", p2[i]);
    }
  printf ("\nTime stamp for P3\n");
  for (i = 1; i <= noOfEvents; i++)
    {
      printf ("%d ", p3[i]);
    }
  printf ("\n");
  return 0;
}

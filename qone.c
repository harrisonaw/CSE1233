#include <stdio.h>

int
main ()
{
  int ticketsSold;
  int attendance;

  printf ("Enter the amount of tickets sold: ");
  scanf ("%d", &ticketsSold);

  attendance = ticketsSold * 2;

  printf ("There are %d people attending the event.\n", attendance);

    // I tried saving to several locations including GitHub and could not find any files

  return 0;
}

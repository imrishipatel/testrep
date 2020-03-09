/***********************************
* EECS 2031 - Lab 7		   
* Filename: mmavg.c	  	
* Author: Patel, Rishi    
* Email: rishi729@my.yorku.ca	
* Login ID: rishi729
************************************/

#include <stdio.h>
#include <stdlib.h>

/*****  YOU MAY ADD YOUR OWN FUNCTION(S) HERE.  *****/

int strInt(char s[])
{
  int i, n = 0;

  for (i = 1; s[i] >= '-' && s[i] <= '9'; i++)
  {

    if (s[i] == '-')
    {
      n = n * 10 + (s[i + 1] - '0');
      n = (-1) * n;
      i++; 
    }
    else
    {
      n = n * 10 + (s[i] - '0');
    }
  }

  return n;
}

/* Function main()
   Input: a set of integers as command-line arguments.
   Output: the maximum, minimum and average of the above set displayed on the standard output.
 */

main(int argc, char *argv[])
{
  int max, min;
  float avg;

  /*****************************************/
  /***** ADD YOUR CODE BELOW THIS LINE *****/

  int i, sum = 0;
  
  
  max = strInt(argv[1]);
  min = strInt(argv[1]);

  if (argc > 0)
  {

    for (i = 2; i <= (argc - 1) ; i++)
    {
      if (*argv[i] >= '-' && *argv[i] <= '9')
      {
        sum += strInt(argv[i]);
      }

      if (strInt(argv[i]) > max)
      {
        max = strInt(argv[i]);
      }

      if (strInt(argv[i]) < min)
      {
        min = strInt(argv[i]);
      }
    }
  }
  else
  {
    printf("Usage: mmavg int1 int2 int3 ...\n");
    exit(0);
  }

  avg = sum / (argc);

  

  /***** ADD YOUR CODE ABOVE THIS LINE *****/
  /*****************************************/

  /**** DO NOT ADD OR CHANGE ANYTHING BELOW THIS LINE ****/

  printf("%d %d %.2f\n", max, min, avg);
}

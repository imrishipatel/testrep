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

int strInt(char *s)
{
  int i, n = 0;

  for (i = 0; *(s + i) >= '0' && *(s + i) <= '9'; i++)
  {
    n = n * 10 + (*(s + i) - '0');
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

  max = stInt(*argv[0]);
  min = stInt(*argv[0]);

  for (i = 0; i < argc; i++)
  {
    if (*argv[i] >= '-' && *argv[i] <= '9')
    {
      if (*argv[i] == '-')
      {
        i++;
      }
      
      sum += stInt(*argv[i]);
    }

    if (stInt(*argv[i]) > max)
    {
      max = stInt(*argv[i]);
    }

    if (stInt(*argv[i]) < min)
    {
      min = stInt(*argv[i]);
    }
  }

  avg = sum / (argc);

  /***** ADD YOUR CODE ABOVE THIS LINE *****/
  /*****************************************/

  /**** DO NOT ADD OR CHANGE ANYTHING BELOW THIS LINE ****/

  printf("%d %d %.2f\n", max, min, avg);
}

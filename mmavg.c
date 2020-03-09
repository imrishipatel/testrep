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
  int i = 0, n = 0;
  int sign;

  if (s[i] == '-')
  {
    sign = -1;
    i++;
  }

  for (; s[i] != '\0'; i++)
  {
    n = n * 10 + (s[i] - '0');
  }

  if (sign == -1)
  {
    return n * (sign);
  }
  else
  {
    return n;
  }
}

/* Function main()
   Input: a set of integers as command-line arguments.
   Output: the maximum, minimum and average of the above set displayed on the standard output.
 */

int main(int argc, char *argv[])
{
  int max, min;
  float avg;

  /*****************************************/
  /***** ADD YOUR CODE BELOW THIS LINE *****/

  int i, op, sum = 0;

  max = min = strInt(argv[1]);

  
  if(argc == 1)
  {
    printf("Usage: mmavg int1 int2 int3 ...\n");
    exit(0);
  }
  else{
    

    for (i = 2; i < argc; i++)
    {
      op = strInt(argv[i]);

      if (op > max)
      {
        max = op;
      }
      if (op < min)
      {
        min = op;
      }

      sum = sum + op;
    }
  
  }

  avg = sum / (argc - 1);

  /***** ADD YOUR CODE ABOVE THIS LINE *****/
  /*****************************************/

  /**** DO NOT ADD OR CHANGE ANYTHING BELOW THIS LINE ****/

  printf("%d %d %.2f\n", max, min, avg);
}

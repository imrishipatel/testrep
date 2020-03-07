/***********************************
* EECS2031 - Assignment 1
* Filename: poly.c 
* Author: Patel, Rishi
* Email: rishi729@my,yorku.ca
* Login ID: rishi729
************************************/

#include "poly.h"

/* 
  Initialize all coefficients and exponents of the polynomial to zero.
 */
void init_polynom(int coeff[], int exp[])
{

    /* ADD YOUR CODE HERE */
    int i;
    for (i = 0; i < ASIZE; i++)
    {
        coeff[i] = 0;
        exp[i] = 0;
    }

} /* end init_polynom */

/*
  Get inputs from user using scanf() and store them in the polynomial.
 */
int not;
int size ;
void get_polynom(int coeff[], int exp[])
{

    /* ADD YOUR CODE HERE */
    int i;
    size = 0 ; 
    scanf("%d ", &not);
    for (i = 0; i < not; i++)
    {
        scanf("%d  %d ", coeff[i], exp[i]);
        
    }

} /* end get_polynom */

/*
  Convert the polynomial to a string s.
 */
void polynom_to_string(int coeff[], int exp[], char s[])
{

    /* ADD YOUR CODE HERE */
    int i, j = 0;
    //size = sizeof(coeff);

    
    //int counter, d, a;
    //char rev[] = 0 ;
    char temp[not + 1] ;

    

    for (i = 0; i < not; i++)
    {

        if (coeff[i] > 0)
        {
            s[j++] = '+' ; 
            s[j++] = coeff[i] + '0';
        }
        else if (coeff[i] < 0)
        {
            s[j] = '-';

            s[j + 1] = coeff[i] + '0';
        }
        else if (coeff[i] == 0)
        {
            s[j++] = coeff[i] + '0';
        }
        else if (coeff[i] > 10)
        {
            int sum, k = 0, input;
            
            input = coeff[i];
            while (input != 0)
            {

                sum = input % 10;
                temp[k] = sum + '0';
                input /= 10;
                k++;
            }
            temp[k] = '\0';
            
                        
            k--;
            while(k != 0){
                s[j++] = temp[k];
            
                k--;

            }
        }
        s[j++] = 'x' ; 
        s[j++] = '^'; 
        s[j++] = exp[i] + '0' ;
        
    }

} /* end polynom_to_string */

/*
  Evaluate the polynomial for the value of x and store the result p(x) in variable result.
 */
void eval_polynom(int coeff[], int exp[], double x, double *result)
{

    /* ADD YOUR CODE HERE */

} /* end eval_polynom */

/*
  Add two polynomials and the result is stored in the first polynomial (arrays co1[] and ex1[]).
 */
void add_polynom(int co1[], int ex1[], int co2[], int ex2[])
{

    /* ADD YOUR CODE HERE */

} /* end add_ polynom */

/************************** END OF FILE ***************************/

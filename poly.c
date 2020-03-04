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
void get_polynom(int coeff[], int exp[])
{

    /* ADD YOUR CODE HERE */
    int i, not;
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
    int i;
    int input;
    int j, counter, k, d, a;
    char temp[sizeof(coeff)] = 0 ; 

    for (i = 0; i < sizeof(coeff), i < sizeof(expo); i++)
    {
        if (coeff[i] < 10)
        {
            char s[i] = coeff[i] + '0';
        }
        else if (coeff[i] > 10 || coeff[i] == 10)
        {
            j = 10, counter = 0, d = 1;
            input = coeff[i];
            while (input != 0)
            {
                k = input % j;
                a = k / d ; 
                temp[counter] = a ; 
                input -= k ; 
                counter++; 
                i *= 10 ; 
                d *= 10 ; 
            }
        }
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

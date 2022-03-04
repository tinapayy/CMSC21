/* Adds two fractions */

#include <stdio.h>

int main(void)
{
    int num1, denom1, num2, denom2, result_num, result_denom;   // declaring integer variables

    /* scanf will read an input according to a particular format.
       input should strictly avoid spaces because it may ruin the result. */

    // input for first fraction
    printf("Enter first fraction: ");
    scanf("%d/%d", &num1, &denom1);                             // scanf will first look for an integer, then /, and lastly another integer input. Point integers to num1 and denom1 variables

    // input for second fraction
    printf("Enter second fraction: ");
    scanf("%d/%d", &num2, &denom2);                             // same goes here but this will be pointed to num2 and denom2

    result_num = num1 * denom2 + num2 * denom1;                 // this formula just uses the cross-multiplication and addition  of 2 fractions to get the values of the numerator
    result_denom = denom1 * denom2;                             // since there is no need to simplify, the formula just multiplied the 2 denominators to get the final denom.
    printf("The sum is %d/%d\n", result_num, result_denom);     // prints ordinary characters and replaces the %d with the final values of the variables indicated (num first then denom)

    return 0;
}
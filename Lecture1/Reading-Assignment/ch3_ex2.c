/* Prints int and float values in various formats */

#include <stdio.h>

int main(void)
{
    int i;          // variable i is declared as an integer and x as a float.
    float x;

    i = 40;
    x = 839.21f;

    /* The statements below will print integers and floats in different formats */

    /* A conversion specification has a form %m.pX or %-m.pX where m and p are integer
       constants and X is a letter. 'm' specifies the min. no. of characters to print.
       'p' will have varying function depending on X but it usually limits the characters
       after a decimal point. Lastly X is the conversion specifier such as d, f or g. */

    /* If the value to be printed requires fewer than m characters, the value is right-justified
       (through white-spaces) Putting a minus sign in front of m causes left justification. */

    /* the | below just represents a border to separate the different formats */

    printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);    // i.e. %5.3d --> 5 min. char, 3 min. digits, decimal form
    printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);      // i.e. %-10g --> 10 char, left justification, decimal/exponential form

    return 0;
}
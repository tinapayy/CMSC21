#include <stdio.h>

int main(void)
{
    int i, j;       // int and float will be the datatypes of our variables
    float x, y;

    i = 10;         // i and j are integers
    j = 20;
    x = 43.2892f;   // x and y are floats
    y = 5527.0f;

    /* The statement below uses conversion specifications such 
       as %d that will convert an int value from binary to a 
       string of decimal digits, the same goes for %f */

    /* The ordinary characters in a format string found below are
       simply copied to the output line. While the %d and %f will be
       replaced by the values of the initialized variables i,j,x,y */

    printf("i = %d, j = %d, x = %f, y = %f\n", i, j , x, y);

    return 0;
}

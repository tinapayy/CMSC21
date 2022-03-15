/***  CELIS, KRISTINA | ASSIGNMENT 2 | as2  ***/

#include <stdio.h>

int main(void)
{   
    /* VARIABLES */
    int number, digit1, digit2, digit3;                       // declares the ff variables as integers
    
    /* USER INPUT */
    printf("Enter a two-digit number (i.e. 123): "); 
    scanf("%d", &number);                                     // will read the user's input and point it to the 'number' variable

    /* CALCULATIONS */
    // used modulo and division operators to get the remainder from each corresponding places              
    digit1 = number % 10;                                     // 'ones' digit
    digit2 = (number / 10) % 10;                              // 'tens' digit
    digit3 = (number / 100) % 10;                             // 'hundreds' digit
    
    /* OUTPUT */
    printf("Reverse: %d%d%d", digit1, digit2, digit3);        // displays the reversed number

    return 0;
}
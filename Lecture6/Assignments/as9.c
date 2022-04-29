/*** SAMPLE CODE 9 || PAGE 73 ***/

/* Computes for length of an array */

#include<stdio.h>

int main(void){
    int number[16];

    size_t n = sizeof(number)/sizeof(number[0]);
    printf("Total elements the array can  hold is: %d\n",n);

    return 0;
}
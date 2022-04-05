/***  CELIS, KRISTINA | ASSIGNMENT 4 | as4  ***/

#include <stdio.h>

int main(void) {
    /* VARIABLES */
    int input, n, two_n;

    /* INPUT */
    printf("Enter (n): ");
    scanf("%d", &input);

    /* OUTPUT */
    printf("  n   2 to the n\n ---  -----------\n");
    two_n = 1;
    for (n = 0; n <= input; n++) {
        printf("%3d      %d\n", n, two_n);      // %3d --> right-justified; spaces before %d to display clean output
        two_n *= 2;
    }

    return 0;
}
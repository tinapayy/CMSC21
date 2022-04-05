/***  CELIS, KRISTINA | ASSIGNMENT 4 | as2  ***/

#include <stdio.h>

int main(void) {
    int i, num;

    printf("Enter an integer (i): ");   //input will be the test variable for the loops
    scanf("%d", &num);

    i = num;        
    printf("::: WHILE :::\n");
    while (i < 10) {
        printf("%d ", i);
        i++;
    }

    i = num;
    printf("\n::: FOR :::\n");
    for (; i < 10;) {                   // for (i = num; i < 10; i++)
        printf("%d ", i);
        i++;
    }

    i = num;
    printf("\n::: DO-WHILE :::\n");
    do {
        printf("%d ", i);
        i++;
    } while (i < 10);

    return 0;
}
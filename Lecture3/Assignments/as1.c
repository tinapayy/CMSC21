/***  CELIS, KRISTINA | ASSIGNMENT 3 | as1  ***/
#include <stdio.h>
#include <stdbool.h>

int main(void) {
    /* VARIABLES */
    int age;
    bool teenager;

    /* USER INPUT */
    printf("Enter age: ");
    scanf("%d", &age);

    /* TERNARY OPERATOR */
    teenager = (age >= 13 && age <= 19) ? true : false;

    /* OUTPUT */
    printf("Teenager? --> %s\n", teenager ? "true" : "false");    // prints 'true' if satisfies condition, else prints 'false'

    return 0;
}
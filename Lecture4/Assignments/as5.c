/***  CELIS, KRISTINA | ASSIGNMENT 4 | as5  ***/

#include <stdio.h>

int main(void) {
    /* VARIABLES */
    int days, n_day, slot;

    /* INPUT & VALIDATION */
    while (1) {
        printf("Enter number of days in the month (28-31 only): ");
        scanf("%d", &days);

        if (days < 28 || days > 31) {       // invalid
            printf("Invalid Input! Must be 28 to 31 only. Try again.\n");
        }
        else {      // valid
            break;
        }
    }

    while (1) {
        printf("Enter the starting day of the week (1 = Sun, 7 = Sat): ");
        scanf("%d", &n_day);

        if (n_day < 1 || n_day > 7) {
            printf("Invalid Input! Must be 1 to 7 only. Try again.");
        }
        else {
            break;
        }
    }
    /* OUTPUT */
    printf("\n~~~C A L E N D A R~~~\n");
    printf("\nSu Mo Tu We Th Fr Sa\n");
    
    for (slot = 1; slot < n_day; slot++) {      // prints spaces depending on the weekday chosed
        printf("   ");
    }
    n_day = (8 - n_day) % 7;                    // will be used to indicate end rows
    for (slot = 1; slot <= days; slot++) {      // assigns the dates in the corresponding weekdays until no slot left
        printf("%2d ", slot);

        if (n_day == slot % 7) {                // when saturday or row has ended, we print a new line
            printf("\n");
        }
    }
    return 0;
}
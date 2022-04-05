/***  CELIS, KRISTINA | ASSIGNMENT 3 | as2  ***/

#include <stdio.h>

int main(void) {        
    int num;

/* While loop for input validation. Will continue to run if input is not between 10 to 99 */
    while (1) {

        printf("Enter a two-digit number: ");
        scanf("%d", &num);

        if (num < 10 || num > 99) {
            printf("Invalid Input! Must be a positive 2-digit number. Please try again.\n");
        }
        else {
            break;
        }
    }

    /* OUTPUT */
    printf("Number entered in words: ");

    /* TENTHS PLACE */
    switch (num / 10) {
        case 1:    // (n)teen
            switch (num % 10) {             // get the remainder to get the specific digit
                case 0: printf("ten"); break;
                case 1: printf("eleven"); break;
                case 2: printf("twelve"); break;
                case 3: printf("thirteen"); break;
                case 4: printf("fourteen"); break;
                case 5: printf("fifteen"); break;
                case 6: printf("sixteen"); break;
                case 7: printf("seventeen"); break;
                case 8: printf("eighteen"); break;
                case 9: printf("nineteen"); break;
            }
            return 0;

        // (n)ty
        case 2: printf("twenty"); break;        
        case 3: printf("thirty"); break;
        case 4: printf("fourty"); break;
        case 5: printf("fifty"); break;
        case 6: printf("sixty"); break;
        case 7: printf("seventy"); break;
        case 8: printf("eighty"); break;
        case 9: printf("ninety"); break;
    }
    
    /* ONES PLACE */
    switch (num % 10) {
        case 1: printf("-one"); break;
        case 2: printf("-two"); break;
        case 3: printf("-three"); break;
        case 4: printf("-four"); break;
        case 5: printf("-five"); break;
        case 6: printf("-six"); break;
        case 7: printf("-seven"); break;
        case 8: printf("-eight"); break;
        case 9: printf("-nine"); break;
    }
    return 0;
}
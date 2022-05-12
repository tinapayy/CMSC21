/***  CELIS, KRISTINA | ASSIGNMENT 2 | as2  ***/

#include<stdio.h>
#define NUM 8                     // macro for the size of the array

/* FUNCTIONS */
int inp_validation() {            // FUNCTION for input validation
    int location;

    while(1) {                   // while true loop that will break once input is valid --- continues to run if input is false/invalid
        printf("\nWhich point are you located?  0 - A, 1 - B, 2 - C, 3 - D, 4 - E, 5 - F, 6 - G, 7 - H");
        printf("\nENTER integer (0-7) based on the corresponding points (A-H): ");
        scanf("%d", &location);

        if (location < 0 || location > 7) {               // checks if input is within the range 0-7
            printf("!!! ERROR !!! Invalid input! Must be an integer between 0-7. Please try again.\n");
            
        } else {                   // input is valid
            return location;       // ends the function and returns the value of input to the calling function
        }
    }
}

void print_matrix(char arr1[NUM], int arr2[NUM][NUM]) {       // FUNCTION for printing the adjacency matrix

    printf("    ");
    for (int a = 0; a < NUM; a++){                            // loop for printing the column labels A-H
        switch (a) {
            case 2: case 3:                                   // special cases for formatting [C] and [D]
                printf("      [%c]", arr1[a]); break;
            default:                                          // rest of the labels
                printf("%8c ", arr1[a]); break;
        }
    }
    printf("\n");

    for (int i = 0; i < NUM; i ++) {                         // nested for loop for printing the matrix
        if (i == 2 || i == 3){                               // if-else statement for printing row labels A-H
            printf("[%c]", arr1[i]);
        } else {
            printf("%-3c", arr1[i]);
        }
        for (int j = 0; j < NUM; j++) {                      // iterates through each element of the array and print it
            printf("%9d", arr2[i][j]);                        
        }
        printf("\n");
    }
}

void navigate(int location, int arr1[NUM][NUM], char arr2[NUM]) {     // FUNCTION for navigating the pathway towards charging station

    if (location == 2 || location == 3) {                             // if input is 2 or 3, then we are already at a charging station
        printf("\n%c is a charging station", arr2[location]);
    } else if (arr1[location][2]) {
        printf("\nNow at point C");
        printf("\nArrived at charging station C!");
    } else if (arr1[location][3]) {
        printf("\nNow at point D");
        printf("\nArrived at charging station D!");
    } else {                                                          // for loop will run if we need to go at another point before reaching a charging station
        for (int new_location = 0; new_location < NUM; new_location++) {
            if ((location != new_location) && (arr1[location][new_location])) {     
                printf("\nNow at point %c", arr2[new_location]);
                navigate(new_location, arr1, arr2);                   // recursive call to navigate with the new point and check if it is now near the charging station
                break;
            }
        }
    }
}

/* MAIN FUNCTION */
int main(void){

    /* INITIALIZATION */
    int location;
    int road_networks[NUM][NUM] = {        // used jagged arrays since there are trailing zeroes
        {1, 1, 0, 0, 0, 1},                // A
        {1, 1, 1},                         // B
        {0, 1, 1, 0, 1, 1},                // [C] charging station
        {0, 0, 0, 1, 1},                   // [D] charging station 
        {0, 0, 0, 1, 1},                   // E
        {1, 0, 1, 0, 0, 1},                // F
        {1, 0, 0, 1, 0, 0, 1},             // G
        {0, 0, 0, 0, 0, 1, 0, 1},          // H
    };

    char points[NUM] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};     // array for points/destinations

    /* MATRIX OUTPUT */
    print_matrix(points, road_networks);

    /* USER INPUT */
    location = inp_validation();
    printf("At Point: %c", points[location]);

    /* NEAREST CHARGING STATION */
    navigate(location, road_networks, points);
    
    return 0;
}
/***  CELIS, KRISTINA | ASSIGNMENT Lecture 13 | as1  ***/

#include <stdio.h>
#include <math.h>

/* INITIALIZATION */
struct line{        // Line Structure
    struct point{
        float x;
        float y;
    } point1, point2;
    float midpoint[2];
    float slope;
    float distance;
};

/* FUNCTIONS */
float solveSlope(struct line line1){
    return (line1.point1.y - line1.point2.y) / (line1.point1.x - line1.point2.x);    // slope = (y1 - y2) / (x1 - x2)
}

void *solveMidpoint(struct line *line1){            // (x1+ x2) / 2, (y1+ y2) / 2
    float x, y; 

    x = (line1->point1.x + line1->point2.x) / 2;    // x - abscissa
    y = (line1->point1.y + line1->point2.y) / 2;    // y - ordinate
    line1->midpoint[0] = x; line1->midpoint[1] = y;
}

float solveDistance(struct line line1){             // sqrt[(x1 - x2)^2 + (y1 - y2)^2]
    return sqrt(pow(line1.point1.x - line1.point2.x , 2) + pow(line1.point1.y - line1.point2.y , 2));           
}

void getSlopeInterceptForm(struct line line1){      // y = mx + b; m = slope; b = y-intercept (b = y - mx)
    printf("\nSlope-Intercept: y = %gx + (%g)", line1.slope, (line1.point1.y - (line1.slope * line1.point1.x)));    
}

/* MAIN FUNCTION */
int main(void){
    struct line line1;      // declare struct line1 variable

    // POINT 1  (INPUT)
    printf("Enter x and y for point1: ");
    scanf("%g %g", &line1.point1.x, &line1.point1.y);

    // POINT 2  (INPUT)
    printf("Enter x and y for point2: ");
    scanf("%g %g", &line1.point2.x, &line1.point2.y);

    // SLOPE
    line1.slope = solveSlope(line1);
    printf("Slope: %g", line1.slope);

    // MIDPOINT
    solveMidpoint(&line1);
    printf("\nMidpoint: (%g , %g)", line1.midpoint[0], line1.midpoint[1]);

    // DISTANCE OF TWO POINTS
    line1.distance = solveDistance(line1);
    printf("\nDistance between 2 points: %g", line1.distance);
    
    // SLOPE-INTERCEPT
    getSlopeInterceptForm(line1);

    return 0;
}
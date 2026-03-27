
#include <stdio.h>
#include <stdbool.h>

#include "shapes.h"

int main( void ) {

    Point p1 = makePoint(0.0, 0.0);
    Point p2 = makePoint(1.0, 0.0);
    Point p3 = makePoint(0.0, 1.0);
    Point p4 = makePoint(1.0, 1.0);
    Point p5 = makePoint(2.0, 2.0);

    Line line1 = {p1, p2};
    Line line2 = {makePoint(3.0, 2.0), makePoint(2.0, 2.0)};

    Triangle tri = {p1, p2, p3};

    // test your code by calling the functions and printing the output 

    printf("Line length (1,1)-(2,1): %.2f\n", lineLength(line1));
    printf("Triangle area (0,0),(1,0),(0,1): %.2f\n", triangleArea(tri1));
    printf("Point (1,1) in triangle: %d\n", pointInTriangle(p4, tri1));
    printf("Point (2,2) in line (3,2)-(2,2): %d\n", pointInLine(p5, line2));
    printf("Same point test (p1 vs p1): %d\n", samePoint(p1, p1));
    printf("Distance between p1 and p2: %.2f\n", distance(p1, p2));
    
    return 0;
}
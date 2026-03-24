
#include <stdio.h>
#include <stdbool.h>

#include "shapes.h"

int main( void ) {

    Point p1 = makePoint(0.0,0.0);
    
    // test your code by calling the functions and printing the output 
        // Create points
    Point p2 = makePoint(1.0, 0.0);
    Point p3 = makePoint(0.0, 1.0);
    Point p4 = makePoint(1.0, 1.0);
    Point p5 = makePoint(2.0, 2.0);
    Point p6 = makePoint(3.0, 2.0);

    // Create line
    Line l1 = makeLine(p1, p2);

    // Create triangle
    Triangle t1 = makeTriangle(p1, p2, p3);

    // Test line length
    printf("Line length: %f\n", lineLength(l1));

    // Test triangle area
    printf("Triangle area: %f\n", triangleArea(t1));

    // Test samePoint
    printf("samePoint(p1, p2): %d\n", samePoint(p1, p2));
    printf("samePoint(p5, makePoint(2.0,2.0)): %d\n",
           samePoint(p5, makePoint(2.0,2.0)));

    // Test pointInLine
    Line l2 = makeLine(p6, p5);
    printf("pointInLine(p5, l2): %d\n", pointInLine(p5, l2));

    // Test pointInTriangle
    printf("pointInTriangle(p4, t1): %d\n", pointInTriangle(p4, t1));
    printf("pointInTriangle(p2, t1): %d\n", pointInTriangle(p2, t1));

    return 0;
}
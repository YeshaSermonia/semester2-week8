//Name: Johann Myeisha Sermonia
//Student ID: 201865495 

#include <stdbool.h>
#include <math.h>

#include "shapes.h"

// makes a point with given x and y coordinates
Point makePoint( float x, float y ) {
    Point new;
    new.x = x; // makes x-coordinate
    new.y = y; // makes y-coordinate
    return new; // returns point with x and y
}

// makes a line
Line makeLine( Point p1, Point p2 ) {
    Line l;
    l.p[0] = p1; // first endpoint
    l.p[1] = p2; // second endpoint
    return l; // returns line with end points
}

// makes a triangle
Triangle makeTriangle( Point p1, Point p2, Point p3 ) {
    Triangle t;
    t.p[0] = p1; // first point
    t.p[1] = p2; // second point
    t.p[2] = p3; // third point
    return t; // returns triangle with points
}

// calculates length of a line
// uses distance formula
float lineLength( Line l ) {
    float dx = l.p[1].x - l.p[0].x; // difference in x-coordinates
    float dy = l.p[1].y - l.p[0].y; // difference in y-coordinates
    return sqrt(dx * dx + dy * dy); // calculates distance
}

// calculates area of a triangle
float triangleArea( Triangle t) {
    float x1 = t.p[0].x; // x-coordinate of point 1
    float y1 = t.p[0].y; // y-coordinate of point 1
    float x2 = t.p[1].x; // x-coordinate of point 2
    float y2 = t.p[1].y; // y-coordinate of point 2
    float x3 = t.p[2].x; // x-coordinate of point 3
    float y3 = t.p[2].y; // y-coordinate of point 3

    // triangle area formula using coordinates
    // triangle area = 1/2 x parallelogram area 
    float a = (x2-x1)*(y3-y1) - (x3-x1)*(y2-y1);

    // makes sure area is positive
    if (a < 0) {
        a = -a;
    }

    return 0.5 * a; // calculates area
}

// checks if two points are the same
bool samePoint( Point p1, Point p2 ) {
    float dx = p1.x - p2.x;
    float dy = p1.y - p2.y;
    
    // convert differences to absolute values
    if (dx < 0) {
        dx = -dx;
    }

    if (dy < 0) {
        dy = -dy;
    }

    // points are equal if both differences are small
    return dx < 1.0e-6 && dy < 1.0e-6;
}       

// check if a point is one of the endpoints of a line
// uses samePoint() to compare with both endpoints
bool pointInLine( Point p, Line l) {
    return samePoint(p, l.p[0]) || samePoint(p, l.p[1]);
}      

// check if a point is one of the points of a triangle
// uses samePoint() to compare with all three points
bool pointInTriangle( Point p, Triangle t ) {
    return samePoint(p, t.p[0]) || samePoint(p, t.p[1]) || samePoint(p, t.p[2]);
}  

// complete other functions below
// - start with stubs as above
// - compile regularly to test syntax
// - test functions by calling them from main()

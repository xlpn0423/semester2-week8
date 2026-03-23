
#include <stdbool.h>
#include <math.h>

#include "shapes.h"

Point makePoint( float x, float y ) {
    Point new;

    new.x = x;

    new.y = y;

    // implementation
    return new;
}

Line makeLine( Point p1, Point p2 ) {

    Line new;

    new.p[0] = p1;

    new.p[1] = p2;

    return new;
}

Triangle makeTriangle( Point p1, Point p2, Point p3 ) {

    Triangle new;

    new.p[0] = p1;

    new.p[1] = p2;

    new.p[2] = p3;

    return new;
}

float lineLength( Line l ) {

   float dx = p1.x + p2.x;

   float dy = p1.y + p2.y;

   return sqrt(dx*dx+dy*dy);
}

float triangleArea( Triangle t ) {

   float a = lineLength(makeLine(t.p[0],t.p[1]));

   float b = lineLength(makeLine(t.p[1],t.p[2]));

   float c = lineLength(makeLine(t.p[0],t.p[2]));

   float s = (a + b + c) / 2;

   float area = sqrt(fabs(s*(s-a)*(s-b)*(s-c)));

   return area;
}

bool samePoint( Point p1, Point p2 ) {

    float dx = fabs(p1.x - p2.x);

    float dy = fabs(p1.y - p2.y);

    return p1.x==p2.x||p1.y==p2.y;
}

bool pointInLine( Point p, Line l) {
    return samePoint(p,l.p[0]) || samePoint(p,l.p[1]);
}

bool pointInTriangle( Point p, Triangle t ) {
    return samePoint(p,t.p[0]) || samePoint(p,t.p[1] || samePoint(p,t.p[2]);
}
// complete other functions below
// - start with stubs as above
// - compile regularly to test syntax
// - test functions by calling them from main()

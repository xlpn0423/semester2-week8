
#include <stdio.h>
#include <stdbool.h>

#include "shapes.h"

int main( void ) {

    Point p1 = makePoint(0.0,0.0);

    Point p2 = makePoint(1.0,1.0);

    Point p3 = makePoint(3.0,4.0);

    Point p4 = makePoint(5.0,5.0);

    Point p5 = makePoint(5.0,5.0);

    printf("p1: (%.1f, %.1f)\n", p1.x, p1.y);

    printf("p2: (%.1f, %.1f)\n", p2.x, p2.y);

    Line l1( Point p1, Point p2 );

    Line l2( Point p1, Point p4 );

    Triangle makeTriangle( Point p1, Point p2, Point p3 )

    printf("are p1 and p4 same:%s\n", samePoint(p1, p4) ? "yes" : "no");

    printf("Line l1(p1-p2) length:%.2f\n", lineLength(l1));
    // test your code by calling the functions and printing the output 
    
    return 0;
}
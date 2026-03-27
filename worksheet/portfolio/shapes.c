
#include <stdbool.h>
#include <math.h>
#include "shapes.h"

float abs(float x) {
    return x < 0 ? -x : x;
}
 Point makePoint(float x, float y) {
    Point new;
    // implementation

    new.x = x;
    new.y = y;
    return new;
}

bool samePoint(Point p1, Point p2) {
    return (abs(p1.x - p2.x) < 1.0e-6) && (abs(p1.y - p2.y) < 1.0e-6);
}

float distance(Point p1, Point p2) {
    return (sqrt((p1.x - p2.x)*(p1.x - p2.x) + (p1.y - p2.y)*(p1.y - p2.y)));
}

float lineLength(Line l) {
    return distance(l.p1, l.p2);
}

bool pointInLine(Point p, Line l) {
    float d1 = distance(p, l.p1);
    float d2 = distance(p, l.p2);
    float lineLeng = lineLength(l);

    return (abs((d1 + d2) - lineLeng) < 1.0e-6);
}

float triangleArea(Triangle t) {
    float x1 = t.p1.x, y1 = t.p1.y;
    float x2 = t.p2.x, y2 = t.p2.y;
    float x3 = t.p3.x, y3 = t.p3.y;

    return (abs((x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2)) / 2.0));
}

bool pointInTriangle(Point p, Triangle t) {
    Triangle t1 = {p, t.p2, t.p3};
    Triangle t2 = {t.p1, p, t.p3};
    Triangle t3 = {t.p1, t.p2, p};

    float A  = triangleArea(t);
    float A1 = triangleArea(t1);
    float A2 = triangleArea(t2);
    float A3 = triangleArea(t3);

    return (abs((A1 + A2 + A3) - A) < 1.0e-6);
}
// complete other functions below
// - start with stubs as above
// - compile regularly to test syntax
// - test functions by calling them from main()

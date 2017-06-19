#include <stdio.h>
#include <math.h>

struct point {
int x;
int y;
};

float dist(struct point, struct point);
int main(void) {

struct point pt = {4,3}, or = {0,0};
printf("%f", dist(pt, or));
return 0;
}
float dist(struct point pt1, struct point pt2)
{
float d;
d = sqrt((pt1.x - pt2.x) * (pt1.x - pt2.x) + (pt1.y
- pt2.y) * (pt1.y - pt2.y));
return d;
}

#include <stdio.h>
#include <math.h>
struct point
{
  float x;
  float y;
};
typedef struct point Point;
Point input(char b[])
{
  Point p;
  printf("Enter the value of %s: ",b);
  scanf("%f%f",&p.x,&p.y);
  return p;
}
float compute_distance(Point p1,Point p2)
{
  float distance;
  distance=sqrt((p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y));
  return distance;
}
void output(Point p1, Point p2, float dist)
{
  printf("The distance between %f,%f and %f,%f is %f",p1.x,p1.y,p2.x,p2.y,dist);
}
int main(void)
{
  float dist;
  Point p1,p2; 
  p1=input("x1,y1");
  p2=input("x2,y2");
  dist=compute_distance(p1,p2);
  output(p1,p2,dist);
  return 0;
}

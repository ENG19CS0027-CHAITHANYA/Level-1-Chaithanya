#include<stdio.h>
#include<math.h>
float input()
{
float x1,y1,x2,y2;
printf("Enter coordinates of point:-");
scanf("%f,%f,%f,%f",&x1,&y1,&x2,&y2);
}
float distance(float x1,float y1,float x2,float y2)
{
float d;
d=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
return d;
}
int main()
{
float x1,y1,x2,y2,d;
x1=input();
y1=input();
x2=input();
y2=input();
d=distance(x1,y1,x2,y2);
printf("The distance between two points is %f",d);
return 0;
}

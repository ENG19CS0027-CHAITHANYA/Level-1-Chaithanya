#include<stdio.h>
float input()
{
 float n;
 printf("Enter the number:- ");
 scanf("%f",&n);
}
float sum( float a, float b)
{
 float sum;
 sum=a+b;
}
void  output( float n)
{
 printf("sum is %f",n);
}
int main()
{
float x,y,z;
x=input();
y=input();
z=sum(x,y);
output(z);
}

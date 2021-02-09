#include<stdio.h>
int main()
{
 float h,b,d;
 float volume_of_tromboloid;
 printf("Enter the value of h,b,d:");
 scanf("%f %f %f",&h,&b,&d);
 volume_of_tromboloid = (((h*b*d)+(d/b))/3);
 printf("volume of tromboloid is %f",volume_of_tromboloid);
 return 0;
}

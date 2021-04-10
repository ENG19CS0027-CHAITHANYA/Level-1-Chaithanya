#include<stdio.h>
typedef struct fraction
{
int numerator;
int denominator;
}Fraction;

Fraction input()
{
Fraction f;
printf("\n Enter the numerator:");
scanf("%d",&f.numerator);
printf("\n Enter the denominator:");
scanf("%d",&f.denominator);
return f;
}
int hcf(int a,int b)
{
int i,gcd=1;
for(i=2; i<=a && i<=b; ++i)
{
if(a%i==0 && b%i==0)
gcd=i;
}
return gcd;
}

Fraction sum(Fraction f1, Fraction f2)
{
int gcd;
	Fraction temp;
	temp.numerator=((f1.numerator*f2.denominator)+(f2.numerator*f1.denominator));
	temp.denominator=(f1.denominator*f2.denominator);
	gcd = hcf(temp.numerator, temp.denominator);
	temp.numerator=temp.numerator/gcd;
	temp.denominator=temp.denominator/gcd;
	return temp;
}
void result( Fraction f1, Fraction f2, Fraction sum)
{
printf("The sum of %d/%d+%d/%d is %d/%d",f1.numerator,f1.denominator,f2.numerator,f2.denominator,sum.numerator,sum.denominator);
}
int main()
{
Fraction f1,f2,res;
printf("Enter the numerator and denominator of First fraction:");
f1=input();
printf("Enter the numerator and denominator of Second function:");
f2=input();
res=sum(f1,f2);
result(f1,f2,res);
return 0;
}

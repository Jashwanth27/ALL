#include<stdio.h>
#include<math.h>
main()
{
	double a,b,c,d;
    double r1,r2;
    d=((b*b)-(4*a*c));
	printf("\nEnter a:");
	scanf("\n%lf",&a);
	printf("\nEnter b:");
	scanf("\n%lf",&b);
	printf("\nEnter c:");
	scanf("\n%lf",&c);
	if(d>0)
	{
	    r1=(-b+sqrt(d))/(2*a);
	    r2=(-b-sqrt(d))/(2*a);
		printf("\nReal");
		printf("\n%lf",r1);
	printf("\n%lf",r2);
	}
	else if(d<0)
	{
		printf("\nImaginary");
	}
}
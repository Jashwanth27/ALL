#include<stdio.h>
#include<math.h>
main()
{
	float a,b,c,r1,r2,d;
	printf("\nEnter a:");
	scanf("\n%d",&a);
	printf("\nEnter b:");
	scanf("\n%d",&b);
	printf("\nEnter c:");
	scanf("\n%d",&c);
	d=((b*b)-4*a*c);
	r1=(-b+sqrt((b*b)-4*a*c))/2*a;
	r2=(-b-sqrt((b*b)-4*a*c))/2*a;
	printf("Root 1 is %f",r1);
	printf("Root 2 is %f",r2);
	if(d>0)
	{
		printf("\nRoots are real");
	}
	else if(d<0)
	{
		printf("\nRoots are imaginary");
	}
	else if(d==0)
	{
		printf("\nRoots are equal");
	}
	
	
}
#include<stdio.h>
main()
{
	int a,b,x,y,z,d;
	a=20,b=10;
	x=++a + ++b;
	printf("\n%d",x);
	printf("\na is %d",a);
	printf("\nb is %d",b);
	y=++a + b++;
	printf("\n%d",y);
	printf("\na is %d",a);
	printf("\nb is %d",b);
	z=a++ + ++b;
	printf("\n%d",z);
    printf("\na is %d",a);
	printf("\nb is %d",b);
	d=a++ + b++;
	printf("\n%d",d);
	printf("\na is %d",a);
	printf("\nb is %d",b);
	
	
}

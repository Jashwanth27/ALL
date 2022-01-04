#include<stdio.h>
main()
{
	int a,b,c,d;
	printf("\Enter a:");
	scanf("%d",&a);
	printf("\Enter b:");
	scanf("%d",&b);
	c=a/b;
	d=a-(b*c);
	printf("\nQuotient is %d",c);
	printf("\nRemainder is %d",d);
	
}

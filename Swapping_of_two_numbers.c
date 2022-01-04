#include<stdio.h>
main()
{
	int a,b,x;
	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);
	printf("\nOld A=%d",a);
	printf("\nOld B=%d",b);
	x=a;
	a=b;
	b=x;
	printf("\nNew A=%d",a);
	printf("\nNew B=%d",b);
}

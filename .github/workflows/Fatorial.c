#include<stdio.h>
main()
{
	int a,i,f;

	printf("\nEnter a number:");
	scanf("%d",&a);
		f=1;
		i=1;
	while(i<=a)
	{
		f=f*i;
		i++;
	}
	printf("Factorial of a number is %d",f);
}

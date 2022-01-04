#include<stdio.h>
main()
{
	int a,n;
	printf("\nEnter a number:");
	scanf("\n%d",&a);
	n=a%2;
	switch(n)
	{
		case 0:printf("\nEven Number");
		break;
		case 1:printf("\nOdd Number");
		break;
	}
}
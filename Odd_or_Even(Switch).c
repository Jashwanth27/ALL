#include<stdio.h>
main()
{
	int a;
	printf("\nEnter Digit:");
	scanf("\n%d",&a);
	switch(a)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 9:printf("Odd Number");
		break;
		case 2:
		case 4:
		case 6:
		case 8:printf("Even Number");	
	}
}
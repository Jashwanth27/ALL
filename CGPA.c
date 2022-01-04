#include<stdio.h>
main()
{
	int a;
	printf("\nEnter a:");
	scanf("\n%d",&a);
	if(a>90)
	{
		printf("\nA");
	}
	if(a>80&&a<90)
	{
		printf("\nB");
	}
	if(a>70&&a<80)
	{
		printf("\nC");
	}
	if(a>60&&a<70)
	{
		printf("\nD");
	}
	if(a<=60)
	{
		printf("\nE");
	}
}
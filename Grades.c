#include<stdio.h>
main()
{
	char grade;
	printf("\nEnter Grade:");
	scanf("\n%c",&grade);
	if(grade=='A')
	{
		printf("\nAverage");
	}
	else if(grade=='E')
	{
		printf("\nExcellent");
	}
	else if(grade=='V')
	{
		printf("\nVery Good");
	}
	else if(grade=='G')
	{
		printf("\nGood");
	}
	else if(grade=='F')
	{
		printf("\nFail");
	}
}
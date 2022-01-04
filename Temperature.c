#include<stdio.h>
main()
{
	int temp;
	printf("\nEnter temperature:");
	scanf("\n%d",&temp);
	if(temp<0)
	{
		printf("\nFreezing Weather");
	}
	else if(temp>0&&temp<10)
	{
		printf("\nVery Cold Weather");
	}
	else if(temp>10&&temp<20)
	{
		printf("\nCold Weather");
	}
		else if(temp>20&&temp<30)
	{
		printf("\nNormal Weather");
	}
		else if(temp>30&&temp<40)
	{
		printf("\nHot Weather");
	}
		else if(temp>=40)
	{
		printf("\nVery Hot Weather");
	}
}
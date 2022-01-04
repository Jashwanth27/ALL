#include<stdio.h>
main()
{
	float unit,bill,total,b;
	printf("\nEnter number of units:");
	scanf("\n%f",&unit);
	if(unit<=50)
	{
		bill=unit*0.50;
		printf("%f",bill);
		b=(20*bill)/100;
	    printf("\n %f",b);
	    total=bill+b;
	    printf("\nTotal is %f",total);
		
	}
	else if(unit>50 && unit<=150)
	{
		bill=(50*0.50)+((unit-50)*0.75);
		printf("%f",bill);
		b=(20*bill)/100;
	    printf("\n %f",b);
	    total=bill+b;
	    printf("\nTotal is %f",total);
	
	}
	else if(unit>150 && unit<=250)
	{
		
		bill=(50*0.50)+(100*0.75)+((unit-150)*1.20);
		printf("%f",bill);
		b=(20*bill)/100;
	    printf("\n %f",b);
	    total=bill+b;
	    printf("\nTotal is %f",total);
	
	}
	else if(unit>250)
	{
		bill=(50*0.50)+(100*0.75)+(100*1.20)+((unit-250)*1.50);
		printf("%f",bill);
		b=(20*bill)/100;
	    printf("\n %f",b);
	    total=bill+b;
	    printf("\nTotal is %f",total);
		
	
	}
	
	
}
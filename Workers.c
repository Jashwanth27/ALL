#include<stdio.h>
main()
{
	float wh,r,sal,nsal;
	printf("\nEnter working hours:");
	scanf("\n%f",&wh);
	printf("\nEnter rate:");
	scanf("\n%f",&r);
	if(wh>40)
	{
		sal=(wh)*(r+(r/2));
		printf("\n%f",sal);
	}
	else
	{
	sal=wh*r;
	printf("\n%f",sal);
    }
}
#include<stdio.h>
main()
{
	float F,C;
	printf("Read Farenheit");
	scanf("%f",&F);
	C=(F-32)*5/9;
	printf("\nCelsius is %f",C);
}

#include<stdio.h>
main()
{
	int a,i,sum=0;
	printf("\nEnter number:");
	scanf("%d",&a);
	i=1;
	while(i<=a)
	{
		sum=sum+i*i;
		i++;
	}
	printf("Sum is %d",sum);
}

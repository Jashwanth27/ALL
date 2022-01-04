#include<stdio.h>
main()
{
	int n,i,sum;
	printf("Enter number:");
	scanf("%d",&n);
	sum=0;
	for(i=0;i<=n;i++)
	{
		
		sum=sum+i;
	}
	printf("Sum is %d",sum);
}

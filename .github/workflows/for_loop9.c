#include<stdio.h>
main()
{
	int sum=0,n,i,a;
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=n;i>0;i/=10)
	{
		a=i%10;
		sum=sum+a;
		
	}
	printf("\nSum is %d",sum);
}

#include<stdio.h>
main()
{
	int n,rem,sum;
	printf("Enter a number:");
	scanf("\n%d",&n);
	sum=0;
	for(;n!=0;n=n/10)
	{
		rem=n%10;
		sum=sum+rem*rem;
	}
	printf("Sum is %d",sum);
}

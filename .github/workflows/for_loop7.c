#include<stdio.h>
main()
{
	int i,n,f;
	printf("Enter Number:");
	scanf("%d",&n);
	for(i=1,f=1;i<=n;i++)
	{
			f=f*i;
	}
	printf("\nFactorial of a number is %d",f);
}

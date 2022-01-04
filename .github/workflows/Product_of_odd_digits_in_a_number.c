#include<stdio.h>
main()
{
	int n,rem,pro;
	printf("\nEnter number:");
	scanf("%d",&n);
	pro=1;
	while(n!=0)
	{
		rem=n%10;
		if(rem%2!=0)
		{
			pro=rem*pro;
		}
		n=n/10;
	}
	printf("\nProduct is %d",pro);
}

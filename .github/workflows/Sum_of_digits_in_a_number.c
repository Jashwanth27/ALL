#include<stdio.h>
main()
{
	int n,t,b,s;
	s=0;
	printf("\nEnter Number:");
	scanf("%d",&n);
	t=n;
	while(t>0)
	{
		b=t%10;
		s=s+b;
		t=t/10;
	}
	printf("\nSum is %d",s);
}

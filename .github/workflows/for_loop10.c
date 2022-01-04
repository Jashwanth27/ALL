#include<stdio.h>
main()
{
	int n,s,r,i,avg;
	printf("\nEnter value of n:");
	scanf("%d",&n);
	s=0;
	for(i=1;i<=n;i++)
	{
		scanf("%d",&r);
		s=s+r;
	}
	printf("\nSum is %d",s);
	avg=(float)s/n;
	printf("\nAverage is %d",avg);
}

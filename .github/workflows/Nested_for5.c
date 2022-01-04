#include<stdio.h>
main()
{
	int i,j,n;
	n=1;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=3;j++)
		{
			printf("%3d",n);
			n++;
		}
		printf("\n");
	}
}

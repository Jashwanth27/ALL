#include<stdio.h>
main()
{
	int a,i,p;
	printf("Enter table of ");
	scanf("%d",&a);
	for(i=1;i<=10;i++)
	{
		p=a*i;
		printf("%dx%d=%d\n",a,i,p);
	}
}

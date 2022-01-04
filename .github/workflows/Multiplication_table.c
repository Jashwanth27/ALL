#include<stdio.h>
main()
{
	int a,i,p;
	i=1;
	printf("\nEnter Number:");
	scanf("%d",&a);
	while(i<=20)
	{
		p=i*a;
		printf("%dx%d=%d\n",a,i,p);
		i++;
	}
}

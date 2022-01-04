#include<stdio.h>
main()
{
	int a,b;
	printf("Enter a and b:");
	scanf("%d%d",&a,&b);
	int i;
	for(i=a;i<b;i++)
	{
		if(i%2==0)
		{
			printf("%d\n",i);
				i++;
		}
	
	}
}

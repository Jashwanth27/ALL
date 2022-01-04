#include<stdio.h>
main()
{
	int i,a=650,b=900;
	for(i=a;i<b;i++)
	{
		if(i%5==0)
		{
			printf("%d\n",i);
			i++;
		}
	}
}

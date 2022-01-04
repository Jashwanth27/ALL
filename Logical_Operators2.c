#include<stdio.h>
main()
{
	int a,b,res;
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	//Logical AND
	res=(a>b)&&(a<b);
	printf("(%d>%d)&&(%d<%d)is%d",a,b,a,b,res);
	//Logical OR
	res=(a>b)||(a<b);
	printf("\n(%d>%d)||(%d<%d)is%d",a,b,a,b,res);	
}

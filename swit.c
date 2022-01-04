#include<stdio.h>
main()
{
	int a,b;
	char c;
	printf("\nEnter Character:");
	scanf("%c",&c);
	printf("\nEnter two numbers:");
	scanf("%d%d",&a,&b);
	switch(c)
	{
		case '+':printf("%d",a+b);
		break;
		case '-':printf("%d",a-b);
		break;	
		case '*':printf("%d",a*b);
		break;
		case '/':printf("%d",a/b);
		break;
		default:printf("\nInvalid Operation");
	}
}
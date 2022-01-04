#include<stdio.h>
void swaping();
void main()
{
	swaping();
}
  void swaping()
  {
  	int a,b,c;
  	printf("enter the values of a and b");
  	scanf("%d%d",&a,&b);
  	c=a;
  	a=b;
  	b=c;
  	printf("%d",a);
  	printf("%d",b);
  }



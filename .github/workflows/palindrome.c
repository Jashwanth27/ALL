#include<stdio.h>
main()
{
	int b,rev,c;
	int a=0;
	printf("enter the integer:");
	scanf("%d",&b);
	c=b;
	while(b!=0) 
	{
		rev=b%10;
		a=(a*10)+rev;
		b/=10;
	}
	 printf ("reversed number:%d",a); 
	 if(a==c)
	 {
	 	printf("\nPalindrome");
	 }
	 else
	 {
	 	printf("\nNot a palindrome");
	 }
}

//Strong Number
#include<stdio.h>
#include<math.h>
int main()
{
	int n,sum,r,c,fact,k;
	printf("Enter n:");
	scanf("%d",&n);
	sum=0;
	k=r;
	fact=1;
	while(k!=0)
	{
		r=k%10;
		fact=fact*k;
		k=k/10;
		sum=sum+fact;
	}
	if(sum==n)
	{
		printf("\nNot a Strong Number");
	}
	else
	{
		printf("\nstrong number");
	}
	
}

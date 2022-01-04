#include<stdio.h>
main()
{
	int P,T,R;
	float SI;
	printf("\nEnter Principal:");
	scanf("%d",&P);
	printf("\nEnter Time:");
	scanf("%d",&T);
	printf("\nEnter Rate:");
	scanf("%d",&R);
	SI=P*T*R*1/100;
	printf("\nInterest is %f",SI);
}

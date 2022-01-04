#include<stdio.h>
main()
{
	int a=25;
	float b=4.666;
	char c='t';
	int *p;
	float *f;
	printf("\n%d\n%d",&p,sizeof(*p));
	p=&a;
	printf("\n%p",p);
}

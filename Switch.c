#include<stdio.h>
main()
{
	int a;
	char c;
		printf("\nEnter a character:");
	scanf("%c",&c);
	switch(c)
	{
		case 'a':
		case 'b':
		case '*':
		case '$':printf("\nCharacter");	
		break;
	}
	printf("\nEnter a value:");
	scanf("%d",&a);

	switch(a)
	{
		case 1:
		case 2:
		case 12:printf("\nNumber");
		break;
		default:printf("\nInvalid data");	
	}

}
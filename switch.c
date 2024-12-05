#include<stdio.h>

main()
{
	int a,b,op;

		printf("enter a first number");
	scanf("%d",&a);
	printf("\nenter a second number");
	scanf("%d",&b);

		
	printf("\nenter opretor");

	printf("\n--1.+");
	printf("\n--2.-");
	printf("\n--3.*");
	printf("\n--4./");
	
	printf("\nenter your oprator");
	scanf(" %d",&op);

		
	
	switch(op)
	{
		case 1:
			printf("/n add %d",a+b);
			break;
			
		case 2:
			printf("/n sub %d",a-b);
			break;
			
		case 3:
			printf("/n mul %d",a*b);
			break;
			
		case 4:
			printf("/n div %d",a/b);
			break;
			
		default:
			printf("/nlease enter a valid oprator");
			break;
	}
}

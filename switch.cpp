#include<stdio.h>
#include<conio.h>
main()
{
	int a,b;
	char op;
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
	scanf("%c",&op);
	
	switch(op)
	{
		case '+':
			printf("/n add %d",a+b);
			break;
			
		case '-':
			printf("/n sub %d",a-b);
			break;
			
		case '*':
			printf("/n mul %d",a*b);
			break;
			
		case '/':
			printf("/n div %d",a/b);
			break;
			
		default:
			printf("/nlease enter a valid oprator");
			break;
	}
}

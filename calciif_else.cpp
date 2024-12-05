#include<stdio.h>
#include<conio.h>
 main()
{
	int a,b,ch;
	printf("enter a first number");
	scanf("%d",&a);
	printf("\nenter a second number");
	scanf("%d",&b);
		
	printf("\nenter your choice");

	printf("\n--1.addition");
	printf("\n--2.subtraction");
	printf("\n--3.multiplication");
	printf("\n--4.division");
	
	printf("\nenter your choice");
	scanf("%d",&ch);
	
	if(ch==1)
	{
		printf("\naddition %d",a+b);
	}
	
	else if(ch==2)
	{
		printf("\n sub %d",a-b);
	}
	
	else if(ch==3)
	{
		printf("\n multiplication %d",a*b);
	}
	
	else if(ch==2)
	{
		printf("\n division %d",a/b);
	}
	
	else
	{
		printf("\n please enter a valid number");
	}

	
}

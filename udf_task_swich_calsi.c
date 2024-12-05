//task udf for swich case clsi

#include<stdio.h>
int a,b;

input()
{
		printf("enter a first number");
	scanf("%d",&a);
	printf("\nenter a second number");
	scanf("%d",&b);

	
}

int add()
{

	printf("\n addition=%d",a+b);
}
int sub()
{

	printf("\n subtraction=%d",a-b);
}

int mul()
{

	printf("\n multiplication=%d",a*b);
}

int div()
{

	printf("\n division=%d",a/b);
}




main()
{
		int op,ans;

	input();
		
	printf("\nenter opretor");

	printf("\nenter 1 if u want to addtion ");
	printf("\nenter 2 if u want to subtraction ");
	printf("\nenter 3 if u want to multiplication ");
	printf("\nenter 4 if u want to division ");
	
	printf("\nenter your oprator");
	scanf("%d",&op);

		
	
	switch(op)
	{
		case 1:
			
  			 
  			 add();
			break;
			
		case 2:
			  sub();
			break;
			
		case 3:
			 mul();
			break;
			
		case 4:
			div();
			break;
			
		default:
			printf("/nlease enter a valid oprator");
			break;
}
}

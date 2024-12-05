#include<stdio.h>
#include<conio.h>
main()
{
	int salary,sum,pf,da,ta;
	
	printf("enter ur month salary");
	scanf("%d",&salary);
	
	pf=salary*10/100;
	printf("pf is : %d",pf);
	
	salary=salary-pf;
	printf("\n deducation of pf is :%d",salary);
	
	printf("\nenter da:");
	scanf("%d",&da);
	
	printf("\nenter ta:");
	scanf("%d",&ta);
	
	printf("===============================================================");
	
	sum=salary+da+ta;
	printf("\n net salary is :%d",sum);
	
	printf("\nannual salary is :%d",sum*12);
	
	
}

#include<stdio.h>
#include<conio.h>
main()
{
	int i=1,a;
	
	printf("enter you want to print table");
	scanf("%d",&a);
	
	
	do
	{
		printf("%d*%d=%d\n",a,i,a*i);
		i++;
	}
	while(i<=10);
	getch();
}

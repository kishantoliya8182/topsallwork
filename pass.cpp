#include<stdio.h>
#include<string.h>
main()
{
	char pass[10],cpass[10];
	printf("enter your password=");
	scanf("%s",&pass);
	printf("\nenter your comnfirm password=");
	scanf("%s",&cpass);
	strcmp(pass,cpass);
	
	if(strcmp(pass,cpass)==0)
	{
		printf("\n valid password");
	}
	else
	{
		printf("!erorr");
	}
}

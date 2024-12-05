#include<stdio.h>
main()
{
	int id[10];
	int n;
	char nm[10][20];
	
	
	printf("enter number of id and name=");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
		printf("enter your id=");
		scanf("%d",&id[i]);
		
		printf("enter your name=");
		scanf("%s",&nm[i]);
	}
    
    
    for(int i=0;i<n;i++)
    {
    	printf(" id=%d name=%s\n",id[i],nm[i]);
	}
	
	
}

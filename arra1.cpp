#include<stdio.h>
main()
{
	int id[10]={1,2,3,4};
	char nm[10][20]={"kishan","jay","mayur","pankaj"};
	
	for(int i=0;i<4;i++)
	{
		printf("id[%d]=%d\n",i,id[i]);
	}
	
		for(int i=0;i<4;i++)
	{
		printf("id[%d]=%s\n",i,nm[i]);
	}
}

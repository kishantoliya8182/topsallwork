#include<stdio.h>
main()
{
	int i,j,k=0;
	for(i=1;i<=5;i++)
	{
		k<=3?k++:k--;
		
		for(j=1;j<=5;j++)
		{
			if(j>=k&&j<=6-k)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
			printf("\n");
		}
	}
}

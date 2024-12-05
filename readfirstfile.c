#include<stdio.h>
main()
{
	FILE*fl;
	char str[200];
	fl=fopen("temp.txt","r");
	
	while(fgets(str,200,fl))
	{
		printf("%s",str);
	}
	
}

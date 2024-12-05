#include<stdio.h>
main()
{
	FILE *fl;
	int id;
	char nm[20];
	char city[20];
	int n,m;
	fl=fopen("temp.txt","a");
	
	printf("enter you want to print data=");
	scanf("%d",&n);
	
	for(m=1;m<=n;m++)
	{
	printf("enter your [%d]student id=",m);
	scanf("%d",&id);
	printf("enter your [%d]student name=",m);
	scanf("%s",&nm);
	printf("enter your [%d]student city=",m);
	scanf("%s",&city);	
	printf("===================");	
	fprintf(fl,"\n[%d]student id=%d",m,id);
	fprintf(fl,"\n[%d]student name=%s",m,nm);
	fprintf(fl,"\n[%d]studentcity=%s",m,city);	
	fprintf(fl,"\n=======================\n");	
	}	
	

	
	
	
}

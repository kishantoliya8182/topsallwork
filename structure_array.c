#include<stdio.h>
struct student
{
	int id;
	char name[20];
	char city[20];
}st[20];
main()
{
   
  int n;
  int i;
  
  printf("enter you want number of student =");
  scanf("%d",&n);
  
  for(i=0;i<n;i++)
  {
  printf("enter your id[%d]=",i+1);
  scanf("%d",&st[i].id);  
  printf("enter your name[%d]=",i+1);
  scanf("%s",&st[i].name);
  printf("enter your city[%d]=",i+1);
  scanf("%s",&st[i].city);
  printf("\n=================================================\n");

  	
  }
  
	printf("\n*****************************print**********************************\n");
  for(i=0;i< n;i++)
  {
  
  printf("\nID[%d]=%d",i+1,st[i].id);
  printf("\nName[%d]=%s",i+1,st[i].name);
  printf("\ncity[%d]=%s",i+1,st[i].city);
  printf("\n=================================================\n");
  }
}

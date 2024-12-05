#include<stdio.h>
struct student
{
	int id;
	char name[20];
	char city[20];
};
main()
{
  student st[20];
  int n;
  
  printf("enter you want number of student =");
  scanf("%d",&n);
  
  for(i=0;i<n;i++)
  {
  printf("enter your id=");
  scanf("%d",&st[i].id);
  printf("enter your name=");
  scanf("%s",&st[i].name);
  printf("enter your city=");
  scanf("%s",&st[i].city);
  	
  	
  }
  

  for(i=0;i< n;i++)
  {
  
  printf("\nID=%d",st[i].id);
  printf("\nName=%s",st[i].name);
  printf("\ncity=%s",st[i].city);
  }
}

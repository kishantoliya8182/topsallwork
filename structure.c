#include<stdio.h>
struct student
{
	int id;
	char name[20];
	char city[20];
}st;
main()
{
  
  printf("enter your id=");
  scanf("%d",&st.id);
  printf("enter your name=");
  scanf("%s",&st.name);
  printf("enter your city=");
  scanf("%s",&st.city);
  
  
  printf("\nID=%d",st.id);
  printf("\nName=%s",st.name);
  printf("\ncity=%s",st.city);
	
}

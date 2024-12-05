#include<stdio.h>
#include<conio.h>
main()
{
      int a,b,c,d,sum,pr;
      printf("enter subject marks out of 100");
      printf("\nenter value sub a:");
      scanf("%d",&a);
      printf("\nenter value sub b:");
      scanf("%d",&b);
      printf("\nenter value sub c:");
      scanf("%d",&c);
      printf("\nenter value sub d:");
      scanf("%d",&d);
      
      sum=a+b+c+d;
      pr=sum/4;
      
      if(pr>40)
      {
      
       if(pr>70)
      {
              printf (" you pass dist...");
              printf("your percentage is :%d",pr);
      }
      else if(pr>60)
      {
           printf (" you pass first class");
           printf("your percentage is :%d",pr);
       
       }
         else if(pr>50)
      {
           printf (" you pass second class");
           printf("your percentage is :%d",pr);
       
       }
         else if(pr>40)
      {
           printf (" you pass  class");
           printf("your percentage is :%d",pr);
       
       }
      }
      
      else
      
      {
          
          printf("you r fail");
          
      }
      getch();
      }

#include<stdio.h>
 main()
{
    int i,j,value[20],n;

    printf("enter a num of value u want =");
    scanf("%d",&n);


   for ( i = 1; i <=n ; j++)
   {
    printf("enter a value");
    scanf("%d",&value[j]);
    /* code */
   }
   

    for ( j = 1; j <=n; j++)
    {
        if (value[0]<value[j])
        {
            value[0]=value[j];
            /* code */
        }
        
        /* code */
    }

    printf("/nmax num is =",value[0]);
    
}

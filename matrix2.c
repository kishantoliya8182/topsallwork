#include<stdio.h>
main()
{
    int arr[2][3];
    int i,j,k;

    for ( k = 0; k <6; k++)
    {
        printf("enter a value");
        scanf("%d",&arr[i][j]);
        /* code */
    }

     for ( i = 0; i < 2; i++)
    {
        /* code */for ( j = 0; j< 3; j++)
        {
            printf("[%d][%d]=%d\n",i,j,arr[i][j]);
            /* code */
        }
        printf("\n");
        
    }
    
}
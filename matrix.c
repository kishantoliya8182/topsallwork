#include<stdio.h>
void main()
{
    int arr[2][3]={{12,23,5},{2,45,7}};
    int i,j;
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
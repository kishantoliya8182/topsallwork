#include<stdio.h>
main()
{
int n,i=0,m,j=0;
printf("enter number u want print table");
scanf("%d",&n);
int a[n];
do
{
	printf("\nenter number %d=",i+1);
	scanf("%d",&a[i]);
	i++;
}while(i<n);

		   
do{
		   do{

             	printf("%d * %d =%d\n", a[j],i,a[j]*i);
             	i++;
           	}while(i<=10);
	    j++;
}while(j<n);

}

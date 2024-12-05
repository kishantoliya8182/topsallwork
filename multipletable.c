#include<stdio.h>
main()
{
int n,i=0,m,j=0;
printf("enter ur choice");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++){
	scanf("%d",&a[i]);
}
for(j=0;j<n;j++){
    for(i=1;i<=10;i++){
	  printf("%d * %d =%d\n", a[j],i,a[j]*i);
	}	
}
}





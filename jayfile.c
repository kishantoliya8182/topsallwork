#include<stdio.h>
main(){
	FILE *fl;
	int id;
	char name[20];
	char city[20];
	int n;
	int i =1;
	
	
	fl=fopen("tex.txt","a");
	printf("How Many student data:");
	scanf("%d",&n);
	

	
	
	for(i;i<=n;i++ ){
		printf("Enter Id:");
		scanf("%d",&id);
		printf("Enter Name:");
		scanf("%s",&name);
		printf("Enter City:");
		scanf("%s",&city);
	}
	
	
	
	
	for(i;i<=n;i++){
		fprintf(fl,"\n Id is:%d",id);
		fprintf(fl,"\n Name is:%s",name);
		fprintf(fl,"\n City is:%s",city);
		fprintf(fl,"\n=====================");
	}
}

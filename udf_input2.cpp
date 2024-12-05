#include <stdio.h>

void id(int a) {
 
    printf(" \nyour id=%d",a);
    
  
}

void getName(char name[20]) {
    printf("\n your name=%s",name);

}

void getCity(char city[20]) {
    printf(" \nyour city=%s",city);
    
}

 main() {
    int a;
    char name[20];
    char city[20];
    
     printf("Enter your id=");
    scanf("%d",&a);
     printf("Enter your name=");
    scanf("%s",&name);
      printf("Enter your city=");
    scanf("%s",&city);

    id(a);
    getName(name);
    getCity(city);

   
}


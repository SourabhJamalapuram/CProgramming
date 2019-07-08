#include <stdio.h>

void main(){
    int num;
    printf("Enter a value: \n");
    scanf("%d",&num);

    char name[100];
    printf("Enter a name: \n");
    scanf("%s",&name[0]);

    printf("Name is: %s\nNumber is: %d",name, num);

}
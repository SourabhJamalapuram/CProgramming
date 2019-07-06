#include <stdio.h>

void main(){
    char name[10];
    strcpy(name, "Sourabh");
    int i;

    //using array
   for(i=0;i<strlen(name);i++){
       printf("%c\n",name[i]);
   }
    

}
#include <stdio.h>

char* getGreetings();
void main(){
    char *ptr;
    ptr = getGreetings();

    printf("greeting is at: %s\n",ptr);

    free(ptr);
    printf("after free: greeting is at: %s\n",ptr);

}
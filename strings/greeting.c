#include <stdio.h>
#include <malloc.h>

char* getGreetings(){
     char *p;
     p = malloc(10);
     strcpy(p,"hello");

     return p; 
}
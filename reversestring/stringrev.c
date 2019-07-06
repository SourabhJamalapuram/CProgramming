#include<stdio.h> 
#include<string.h>
  
void main() 
{ 
    char *ptr;
   char name[10] = "sourabh"; 

   ptr = &name[strlen(name)-1];
  
  int i;
    for(i=0;i<strlen(name);i++){
       printf("%c",*ptr);
       ptr--;
   }
   printf("Normal Name =%s\n",name); 
  
   printf("Reversed Name =%s",strrev(name)); 


   
} 
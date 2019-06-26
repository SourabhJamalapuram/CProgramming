#include <stdio.h>

int main () {

   char greeting[6] = {'H', 'e', 'l', 'l', 'o','\0'};
   printf("Greeting message: %s\n", greeting );

   char *ptr;
   ptr = greeting;
   printf("ptr is not pointi to: %s\n", ptr);
   ptr++;
   printf("ptr is not pointing to: %s\n", ptr);
   printf("greeting is at: %s\n",greeting);
   return 0;
}
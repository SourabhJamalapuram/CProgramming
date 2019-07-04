#include<stdio.h>
 
void main()
{
   int userInput;
   int checkPoint;
   
   printf("Enter a number:\n");
   scanf("%d",&userInput);
 
   for (  checkPoint  = 2 ; checkPoint < userInput ; checkPoint++ )
   {
      if ( userInput%checkPoint == 0 )
      {
         printf("%d isn't prime.\n", userInput);
     break;
      }
   }
   if ( checkPoint == userInput )
      printf("%d is prime.\n", userInput);
       
}
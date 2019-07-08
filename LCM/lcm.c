#include <stdio.h>
void main( ) {

   int num1;
   int num2;
   int i;
   int newNum;
   

   printf( "Enter 1st value :\n");
   scanf("%d",&num1);

    printf( "Enter 2nd value :\n");
   scanf("%d",&num2);

   printf("First number is: %d\nSecond number is: %d\n",num1,num2);

  

   int highNum; 
   int lowNum;

   if(num1>num2){
      highNum = num1;
      lowNum = num2;
   }else{
       highNum = num2;
      lowNum = num1;
   }
    newNum = highNum;

    for(i=1;i<100;i++){
        int checker = newNum%lowNum;
        if(checker==0){
            printf("LCM is: %d", newNum);
            break;
        }
        newNum = highNum * i;
    }


   
}
#include <stdio.h>

void main(){
    int num1 = 10;
    int num2 = 5;

    int result1 = num1 + num2;
    int result2 = num1 - num2;

    printf("First result is: %d & Second result is: %d\n",result1,result2);

    float pi = 3.14;
    double d = 4.56;

    printf("Floating number is: %f & Double is: %f\n",pi,d);

    char grade = 'A';
    printf("My grade is: %c\n",grade);

    char name[10];
    strcpy(name,"Sourabh");

    printf("My name is: %s",name);
}
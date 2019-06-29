#include <stdio.h>

int age;

void setAge(){
    age = 18;
}

void showAge(){
    printf("My age is: %d", age);
}

void main(){
    setAge();
    showAge();
}

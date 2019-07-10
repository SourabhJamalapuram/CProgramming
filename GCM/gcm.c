#include <stdio.h>

void main()
{
    int num1;
    int num2;
    int i;
    int result;
    int max;
    int min;

    printf("Enter first value: \n");
    scanf("%d", &num1);

    printf("Enter second value: \n");
    scanf("%d", &num2);

    if(num1>num2){
        max = num1;
        min = num2;
    }else{
        max = num2;
        min = num1;
    }

    for(i = 1; i <= max; i++)
    {
        if(num1 % i == 0 && num2 % i == 0)
            result = i;
    }

    printf("Greatest Common Multiple is = %d", result);
}
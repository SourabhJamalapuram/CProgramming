#include <stdio.h>

int main( int argc, char *argv[] )  {
    printf("argc is: %d\n", argc);

    for(int i=0; i<argc; i++){
        printf("%d %s\n", i, argv[i]);

    }
   int val = atoi(argv[1]);
   int val2 = atoi(argv[2]);

   int result = val+ val2;

   printf("Final result is: %d", result );

}
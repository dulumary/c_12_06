#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {

    int numbers[5] = {4, 5, 3, 6, 2};
    
    int *numbersPointer = (int *)malloc(16);
    numbersPointer[0] = 4;
    numbersPointer[1] = 5;
    numbersPointer[2] = 3;
    numbersPointer[3] = 6;
 
    int size = (int)sizeof(int);
    
    printf("%d\n", sizeof(int));
    printf("%d\n", sizeof(char));
    printf("%d\n", sizeof(long));
    printf("%d\n", sizeof(float));
    
    printf("%p\n", numbersPointer);
//    free(numbersPointer);
    
    numbersPointer = (int *)malloc(sizeof(int) * 4);
    numbersPointer[0] = 4;
    numbersPointer[1] = 5;
    numbersPointer[2] = 3;
    numbersPointer[3] = 6;
    
    printf("%p\n", numbersPointer);
    
    char *string = (char *)malloc(sizeof(char) * 52);
    
    free(numbersPointer);
    
    return 0;
}

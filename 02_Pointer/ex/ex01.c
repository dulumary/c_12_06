#include <stdio.h>

int main(int argc, const char * argv[]) {
    int number = 10;
    int* numberPointer = 0;
    
    numberPointer = &number;
    
    printf("%p\n", numberPointer);
    printf("%p\n", &number);
    
    printf("%d\n", *numberPointer);
    
    *numberPointer = 30;
    
    printf("%d\n", *numberPointer);
    printf("%d\n", number);
    
    int number1 = 10;
    int number2 = number1;
    
    number2 = 30;
    
    printf("%d\n", number1);
    printf("%d\n", number2);
    
    
    int* insidePointer;
    if(1) {
        int insideNumber = 5;
        insidePointer = &insideNumber;
        
        printf("%d\n", *insidePointer);
    }
    
    printf("%d\n", *insidePointer);
    
    return 0;
}

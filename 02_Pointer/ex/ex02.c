#include <stdio.h>

int main(int argc, const char * argv[]) {

    int numbers[5] = {5, 8, 3, 4, 2};
    
    printf("%p\n", numbers);
    printf("%d\n", *numbers);
    
    printf("%p\n", numbers + 1);
    
    char characters[5] = {'a', 'c', 'e', 'n', 'b'};
    
    printf("%p\n", characters);
    printf("%p\n", characters + 1);
    
    printf("%d\n", *numbers);
    printf("%d\n", *(numbers + 1));
    printf("%d\n", *(numbers + 2));
    
    printf("%d\n", *(numbers + 1));
    printf("%d\n", *numbers + 1);
    
    int* numbersPointer = numbers;
    
    printf("%p\n", numbersPointer);
    printf("%d\n", *numbersPointer);
    
    numbersPointer = numbers + 3;
    
    printf("%p\n", numbersPointer);
    printf("%d\n", *numbersPointer);
    
    return 0;
}

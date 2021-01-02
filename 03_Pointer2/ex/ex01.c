#include <stdio.h>

void foo(int x) {
    x += 5;
}

void foo2(int* x) {
    *x += 5;
}


void arrayParameter(int array[], int size) {
    
    for(int i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }
    
    printf("\n");
}

void arrayPointerParameter(int *array, int size) {
    
    for(int i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }
    
    printf("\n");
}


int main(int argc, const char * argv[]) {

    int number = 10;
    
    foo(number);

    printf("%d\n", number);
    
    int* numberPointer = &number;
    foo2(&number);
//    foo2(numberPointer);
    printf("%d\n", number);
    
    int numbers[5] = {1, 2, 3, 4, 5};
    
    arrayParameter(numbers, 5);
    arrayPointerParameter(numbers, 5);
    
    return 0;
}

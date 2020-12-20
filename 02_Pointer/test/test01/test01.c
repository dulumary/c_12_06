#include <stdio.h>

int main(int argc, const char * argv[]) {

    /*
        아래 변수를 포인터 변수 없이 아래와 같이 출력하세요.
     */
    int number = 5983;
    
    printf("주소 : %p\n", &number);
    
    /*
        아래 변수를 포인터 변수를 통해서 아래와 같이 출력 하세요.
     */
    number = 15;
    
    int* numberPointer = &number;
    
    printf("주소 : %p\n", numberPointer);
    printf("값 : %d\n", *numberPointer);
    
    /*
        아래 두개의 변수를 직접 출력 하지 않고,
        포인터 변수를 통해서 아래와 같이 출력 하세요.
     */
    
    int number1 = 15;
    int number2 = 54;
    
    numberPointer = &number1;
    
    printf("number1 의 값 : %d \n", *numberPointer);
    
    numberPointer = &number2;
    printf("number2 의 값 : %d \n", *numberPointer);
    
    /*
        아래 두개의 변수를, 포인터 변수를 통해서 변수의 값을 변경하고 이를 출력 하세요.
     */
    number1 = 15;
    number2 = 54;
    
    numberPointer = &number1;
    *numberPointer = 24;
    
    numberPointer = &number2;
    *numberPointer = 36;
    
    printf("number1 의 값 : %d \n", number1);
    printf("number2 의 값 : %d \n", number2);
    
    return 0;
}

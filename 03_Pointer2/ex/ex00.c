#include <stdio.h>

int getNoodlesPrice(int count) {
    
    int noodleCup = 850;
    int result = noodleCup * count;
    return result;

}

int sum(int x, int y) {
    int result = x + y;
    return result;
}

int allSum(int number) {
    
    int sum = 0;
    for(int i = 1; i <= number; i++) {
        sum += i;
    }
    
    return sum;
}

void printHelloWorld() {
    printf("Hello World!!\n");
    
    printf("Hello World 2 !!\n");
    return;
}

int main() {
    
    int total = getNoodlesPrice(5); // 4250
    // total = 850 * 5;
    
    printf("총 합은 %d 입니다\n", total);

    printf("합은 %d 입니다\n", sum(214,245));
    
    int number = 0;
    
    scanf("%d", &number);
    
    int result = allSum(number);
    printf("%d\n", result);
    
    printHelloWorld();
    
    return 0;
}



#include <stdio.h>

/*
    정수를 파라미터로 받아서 2제곱의 결과를 돌려 주는 함수를 만드세요.
 */

int getSquared(int x) {
    int result = x * x;
    
    return result;
}

/*
    정수를 파라미터로 받아서 짝수면 0 홀수면 1을 돌려 주는 함수를 만드세요.
 */

int findOddEven(int number) {
    int result = 0;
    if(number % 2 == 0) {
        result = 0;
    } else {
        result = 1;
    }
    
    return result;
}

/*
    주사위를 굴려서 상금을 받는 게임이 있다.
    4이상이 나올 경우에는 눈금의 수에 만원을 곱한 만큼 상금을 받는다.
    4 미만이 나올경우는 꽝 이다.
    주사위를 굴린 결과를 파라미터로 받고, 상금을 돌려주는 함수를 만드세요.
 */

int diceGame(int diceNumber) {
    int result = 0;
    
    if(diceNumber >= 4) {
        result = diceNumber;
    } else {
        result = 0;
    }
    
    return result;
}

/*
    두개의 수를 파라미터로 받아서 더 큰 수를 돌려 주는 함수를 만드세요.
 */

int largerNumber(int number1, int number2) {
    
    if(number1 > number2) {
        return number1;
    } else {
        return number2;
    }
}

/*
    속도를 파라미터로 받고, 최고 속도가 100km/h 인 고속도로에서의 벌금을 돌려주는 함수를 만드세요.
 */

int getFine(int speed) {
    
    int overSpeed = speed - 100;
    
    int fine = 0;
    if(overSpeed <= 0) {
        fine = 0;
    } else if(overSpeed <= 20) {
        fine = 40000;
    } else if(overSpeed <= 40) {
        fine = 70000;
    } else if(overSpeed
              <= 60) {
        fine = 100000;
    } else {
        fine = 130000;
    }
    
    return fine;
}


int main() {
    
   /*
        2의 제곱 함수 사용
    */
    
    int number = 0;
    printf("숫자 : ");
    scanf("%d", &number);
    
    printf("%d\n", getSquared(number));
    
    /*
        홀짝 함수 사용
     */
    
    printf("숫자 : ");
    scanf("%d", &number);
    
    printf("%d\n", findOddEven(number));
    
    /*
        주사위 게임 함수 사용
     */
    
    printf("주사위 : ");
    scanf("%d", &number);
    printf("%d만원\n", diceGame(number));
    
    /*
        큰 수 찾기 함수 사용
     */
    
    int number1 = 0;
    int number2 = 0;
    
    printf("두 수 : ");
    scanf("%d %d", &number1, &number2);
    
    printf("%d\n", largerNumber(number1, number2));
    
    /*
     
        과속 벌금 함수 사용
     */
    
    int speed = 0;
    
    printf("속도 : ");
    scanf("%d", &speed);
    printf("%d원\n", getFine(speed));
    
    return 0;
}



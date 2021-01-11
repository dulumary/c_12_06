#include <stdio.h>

/*
    시험 점수에 오류가 있어서 10점을 더해주어야 한다. 이를 수행하기 위한 함수를 만들고, 결과를 출력 하세요.
    10을 더한 결과가 100이 넘을 경우 100으로 점수를 맞춰 주세요.
 */

void modifyScore(int* score) {
    *score += 10;
    
    if(*score > 100) {
        *score = 100;
    }
}

/*
    수를 받아서, 7로 나눈 나머지와 몫을 전달해주는 함수를 만들고, 결과를 출력 하세요.
 */

void divmod7(int number, int* quotient, int* remainder) {
    *quotient = number / 7;
    *remainder = number % 7;
}

/*
    시간당 800원의 이용료를 가진 PC방을 이용 하려고 한다.
    지금 가지고 있는 용돈과 사용 시간을 받아서, 이용 후 남아 있는 금액을 알려 주는 함수를 만들고, 결과를 출력하세요.
 */

void remaindMoney(int *money, int time) {
    *money -= 800 * time;
}

/*
    두 개의 변수를 받고, 서로의 값을 교체 하는 함수를 만드세요.
 */

void swap(int* x, int* y) {
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

/*
    배열을 파라미터로 받아서, 90 점이상의 점수가 몇개인지 return 하는 함수를 만드세요.
 */

int getCountHightScore(int scores[], int size) {
    
    int count = 0;
    
    for(int i = 0; i < size; i++) {
        if(scores[i] >= 90) {
            count++;
        }
        
    }
    
    return count;
}

/*
    수가 들어 있는 배열을 받아서, 70점 미만 점수를 모두 70점으로 변경하는 함수를 만들세요.
 */

void trickScores(int *scores, int size) {
    
    for(int i = 0; i < size; i++) {
        if(scores[i] < 70) {
            scores[i] = 70;
        }
    }
}



int main(int argc, const char * argv[]) {

    // 1. 점수 수정
    
    int score = 0;
    printf("점수를 입력 하세요 : ");
    scanf("%d", &score);
    modifyScore(&score);

    printf("수정된 점수 : %d\n", score);

    // 2. 몫과 나머지

    int quotient = 0;
    int remainder = 0;

    int number = 0;
    printf("수를 입력 하세요 : ");
    scanf("%d", &number);

    divmod7(number, &quotient, &remainder);

    printf("%d를 7로 나눈 몫: %d 나머지 : %d\n", number, quotient, remainder);

    // 3.남은 금액
    int money = 0;
    int time = 0;
    printf("용돈과 이용시간을 입력 하세요 : ");
    scanf("%d %d", &money, &time);

    remaindMoney(&money, time);
    printf("남은 돈은 : %d\n", money);

    // 4. swap
    int x = 4;
    int y = 7;

    printf("x : ");
    scanf("%d", &x);
    printf("y : ");
    scanf("%d", &y);

    swap(&x, &y);

    printf("x : %d, y : %d\n", x, y);
    
    // 5. 90점 이상의 개수
    
    int scores[5] = {85, 90, 82, 95, 100};
    
    printf("90점 이상의 개수 : %d\n", getCountHightScore(scores, 5));
    
    // 6 . 점수 조작
    
    int scores2[5] = {85, 46, 80, 65, 32};
    
    trickScores(scores2, 5);
    
    printf("성적표 : ");
    for(int i = 0; i < 5; i++) {
        printf("%d점 ", scores2[i]);
    }
    
    printf("\n");
    
    return 0;
}

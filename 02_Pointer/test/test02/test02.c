#include <stdio.h>

int main(int argc, const char * argv[]) {

    
    int scores[5] = {90, 85, 70, 75, 82};
    
    /*
        포인터 연산을 이용해서 세번째 점수를 80으로 변경하세요.
     */
    
    *(scores + 2) = 80;
    
    /*
        포인터 연산을 통해서 점수를 모두 출력 하세요.
     */
    
    for(int i = 0; i < 5; i++) {
        printf("%d ", *(scores + i));
    }
    printf("\n");
    
    /*
        포인터 연산만을 이용해서 배열에 값에 접근하고, 이를 이용해서 평균을 구하세요.
     */
    
    int sum = 0;
    for(int i = 0; i < 5; i++) {
        sum += *(scores + i);
    }
    
    printf("평균 점수는 %f 입니다.\n", sum / 5.0);
    
    
    /*
        포인터 연산만을 이용해서 배열에 값에 접근하고, 모든 성적을 5점씩 증가 시키고 이를 출력 하세요.
     */
    
    for(int i = 0; i < 5; i++) {
        *(scores + i) += 5;
        printf("%d ", *(scores + i));
    }
    
    return 0;
}

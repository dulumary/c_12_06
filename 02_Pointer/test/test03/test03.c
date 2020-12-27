#include <stdio.h>

int main(int argc, const char * argv[]) {

    /*
        scanf 를 아래와 같이 & 없이 변수를 입력 받고 출력 하세요.
     */
    
    int number = 0;
    int* numberPointer = &number;
    
    printf("수를 입력 하세요 : ");
    scanf("%d", numberPointer);
    
    printf("입력 받은 수 : %d\n", number);
    
    /*
        아래와 같이 암호가 숨어 있는 배열이 있다.
        암호를 찾기 어렵게 하기 위해서, 숨어 있는 규칙이 있다.

        1. 0번째 값부터 탐색을 시작한다.
        2. 배열 안의 값의 일의 자리 숫자 만큼 포인터를 이동 시킨다.
        3. 천의 자리 숫자가 짝수이면 + 방향으로 이동한다.
        4. 천의 자리 숫자가 홀수 이면 - 방향으로 이동한다.
        5. 이동한 위치에 있는 값을 기준으로 반복 탐색 한다.
        6. 총 5번 이동한 후 위치한 값을 암호로 출력 한다.
     */
    
    int passwords[10] = {2843, 4445, 6834, 9642, 8439, 2343, 5831, 1536, 7427, 3653};
    
    int* passwordsPointer = passwords;
    for(int i = 0; i < 5; i++) {
        int password = *passwordsPointer;
        int size = password % 10;
        int direct = password / 1000;
        
        if(direct % 2 == 0) {
            passwordsPointer += size;
        } else {
            passwordsPointer -= size;
        }
    }
    
    printf("암호 : %d\n", *passwordsPointer);
    
    return 0;
    
}

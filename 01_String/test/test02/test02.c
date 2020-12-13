#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    /*
     아래 문자열의 길이를 strlen 함수를 사용해서, 출력 하세요.
     computer programming
     
     */
    
    char string[] = "computer programming";
    
    printf("%d\n", strlen(string));
    
    /*
        문자열을 입력 받고 그 길이를 출력 하세요.
     */
    
    char inputString[128];
    scanf("%s", inputString);
    
    printf("%s의 길이는 %d\n", inputString, strlen(inputString));
 
    /*
        두개의 단어를 입력 받고 어떤 문자열의 크기를 아래와 같이 출력 하세요.
     */
    
    char inputString1[128];
    char inputString2[128];
    printf("단어1 : ");
    scanf("%s", inputString1);
    printf("단어2 : ");
    scanf("%s", inputString2);
    
    int compare = strcmp(inputString1, inputString2);
    if(compare == 0) {
        printf("%s = %s\n", inputString1, inputString2);
    } else if(compare < 0) {
        printf("%s < %s\n", inputString1, inputString2);
    } else if(compare > 0) {
        printf("%s > %s\n", inputString1, inputString2);
    }
    
    /*
        아래와 같이 생년이 표현된 문자열으로 현재 나이를 구하여 출력 하세요.
        char yearString[] = "1994년생";
     */
    
    char yearString[] = "1994년생";
    
    int year = atoi(yearString);
    printf("나이는 %d살 입니다.\n", 2020 - year + 1);
    
}

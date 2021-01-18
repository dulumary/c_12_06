#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {

    /*
        아래 주어진 문자열에서 포인터 연산을 이용해서 아래와 같이 출력 하세요.
        my life
     */
    
 
    char *string1 = "Music is my life";
    
    printf("%s\n", string1 + 9);
    
    /*
        아래 주어진 문자열을 다른 문자열 변수에 복사 하고 출력 하세요.
     */
    
    char *string2 = "You are so beatiful";
    char stringCopy[32];
    
    strcpy(stringCopy, string2);
    printf("%s\n", stringCopy);
    
    /*
        아래 문장이 주어 졌을때, 문자열을 입력 받고 해당 문자열이 포함되었는지 출력하세요.
     */
    
    char *string3 = "I can speak English very well";
    char inputString[16];
    
    printf("찾을 단어 : ");
    scanf("%s", inputString);
    
    char* pointer = strstr(string3, inputString);
    
    if(pointer != NULL) {
        printf("포함되어 있습니다.\n");
    } else {
        printf("포함 되어 있지 않습니다.\n");
    }
    
    /*
        아래 문장에서 단어의 개수가 몇개인지 strtok 을 사용해서 구하여 출력 하세요.
     */
    
    char string4[] = "I am still hungry";
    
    pointer = strtok(string4, " ");
    
    int count = 0;
    while(pointer != NULL) {
        count++;
        pointer = strtok(NULL, " ");
    }
    
    printf("단어 개수 : %d\n", count);
    
    /*
        아래 주어진 문자열 에서 "so beatiful" 를 다른 문자열 변수에 복사 하고 출력 하세요
     */
    
    char *string5 = "You are so beatiful";
    
    strcpy(stringCopy, string5 + 8);
    printf("%s\n", stringCopy);
    
    return 0;
}

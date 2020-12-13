#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {

    char string1[] = "Hello";
    char string2[] = "World";
    
    char string3[1024];
    
    sprintf(string3, "%s %s", string1, string2);
    printf("%s\n", string3);
    
    int score = 90;
    sprintf(string3, "당신의 점수는 %d 입니다.", score);
    printf("%s\n", string3);
    
    
    // 길이
    
    int length = strlen(string1);
    printf("%s 의 길이는 %d 이다.\n", string1, length);
    
    for(int i = 0; i < strlen(string2); i++) {
        printf("%c", string2[i]);
    }
    
    printf("\n");
    
    int compare = strcmp(string1, string2);
    if(compare == 0) {
        printf("%s와 %s는 같은 문자열 입니다.\n", string1, string2);
    } else if(compare < 0) {
        printf("%s보다 %s문자열이 더 큽니다.\n", string1, string2);
    } else if(compare > 0) {
        printf("%s보다 %s문자열이 더 작습니다.\n", string1, string2);
    }
    
    int compare = strcmp(string1, "Hello");
    if(compare == 0) {
        printf("%s와 Hello는 같은 문자열 입니다.\n", string1);
    }
    
    char intString[] = "90";
    
    printf("문자열 \"%s\" 에서 %d를 추출하였다.\n", intString, atoi(intString));
    
    char intString1[] = "93점";
    char intString2[] = "점수";
    char intString3[] = "내 점수는 93점";
    
    printf("문자열 \"%s\" 에서 %d를 추출하였다.\n", intString1, atoi(intString1));
    printf("문자열 \"%s\" 에서 %d를 추출하였다.\n", intString2, atoi(intString2));
    printf("문자열 \"%s\" 에서 %d를 추출하였다.\n\n", intString3, atoi(intString3));
    
    
    char floatString[] = "3.75";
    
    char floatString1[] = "3.75점";
    char floatString2[] = "평점";
    char floatString3[] = "내 평점은 3.75점";
    
    printf("문자열 \"%s\" 에서 %lf를 추출하였다.\n", floatString1, atof(floatString1));
    printf("문자열 \"%s\" 에서 %lf를 추출하였다.\n", floatString2, atof(floatString2));
    printf("문자열 \"%s\" 에서 %lf를 추출하였다.\n", floatString3, atof(floatString3));
    
    
}

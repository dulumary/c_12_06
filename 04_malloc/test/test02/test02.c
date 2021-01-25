#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    /*
        배열에서 일부 갯수 만큼 잘라낸 새로운 배열을 만들고자 한다.
        수를 입력 받고 입력 받은 수만큼 앞에서 잘라낸 새로운 배열을 만들고 출력 하세요.

     */
    
    double weights[10] = {77.4, 77.5, 77.1, 78.1, 77.5, 77.1, 76.4, 76.0, 75.3, 74.9};
    
    int count = 0;
    printf("잘라낼 갯수를 입력 하세요 : ");
    scanf("%d", &count);
    
    int remaindCount = 10 - count;
    double *lastWeights = (double *)malloc(sizeof(double) * remaindCount);

    for(int i = 0; i < 10 - count; i++) {
        lastWeights[i] = weights[i + count];
    }
    
    for(int i = 0; i < remaindCount; i++) {
        printf("%.1f ", lastWeights[i]);
    }
    
    free(lastWeights);
    printf("\n");
    
    /*
        해당 점수들중 90점 이상의 점수만 저장하는 배열을 메모리 낭비 없이 만들고, 이를 출력 하세요.
     */
    
    int scores[] = {75, 80, 95, 100, 70, 70, 90, 60, 95, 100};
    
    int highCount = 0;
    for(int i = 0; i < 10; i++) {
        if(scores[i] >= 90) {
            highCount++;
        }
    }
    
    int *highScores = (int *)malloc(sizeof(int) * highCount);
    
    int index = 0;
    for(int i = 0; i < 10; i++) {
        if(scores[i] >= 90) {
            highScores[index++] = scores[i];
        }
    }
    
    for(int i = 0; i < highCount; i++) {
        printf("%d ", highScores[i]);
    }
    
    free(highScores);
    printf("\n");
    
    /*
        해당 문자열에서, !(느낌표) 를 모두 제거한 문자열 변수를 메모리 낭비 없이 새로 만들고, 이를 출력 하세요.
     */
    
    char *wrongString = "Would!! you !like!! something !to drink?!";
    
    int wrongCount = 0;
    for(int i = 0; i < strlen(wrongString); i++) {
        if(wrongString[i] == '!') {
            wrongCount++;
        }
    }
    
    int stringSize = (int)strlen(wrongString) - wrongCount + 1;
    char *string = (char *)malloc(sizeof(char) * stringSize);
    
    index = 0;
    for(int i = 0; i < strlen(wrongString); i++) {
        if(wrongString[i] != '!') {
            string[index++] = wrongString[i];
        }
    }
    
    string[stringSize - 1] = '\0';
    
    printf("%s\n", string);
    
    
    return 0;
}

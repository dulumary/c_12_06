#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char * argv[]) {

    /*
        int  변수 73개, char 변수 43개, double 변수 12개 의 총 byte 수를 구하여 출력하세요.
     */
    
    int sizeSum = (sizeof(int) * 73) + (sizeof(char) * 43) + (sizeof(double) * 12);
    
    printf("%d byte\n", sizeSum);
    
    /*
        아래와 같이 동적으로 할당된 배열에 값을 입력 받아서 저장 하고, 이를 출력 하세요.
     */
    
    int *inputArray = (int *)malloc(sizeof(int) * 3);
    
    for(int i = 0; i < 3; i++) {
        printf("수를 입력 하세요 : ");
        scanf("%d", &inputArray[i]);
    }
    
    for(int i = 0; i < 3; i++) {
        printf("%d ", inputArray[i]);
    }
    
    free(inputArray);
    
    printf("\n");
    
    /*
        아래 주어진 배열과 똑같은 배열을 동적 할당을 이용해서 만들고, 출력 하세요.
     */
    
    int array[4] = {1200, 1500, 1000, 2500};
    
    int *copyArray = (int *)malloc(sizeof(int) * 4);
    
    for(int i = 0; i < 4; i++) {
        copyArray[i] = array[i];
    }
    
    for(int i = 0; i < 4; i++) {
        printf("%d ", copyArray[i]);
    }
    free(copyArray);
    printf("\n");
    
    /*
        입력 받은 수만큼 저장 하고 출력 하는 프로그램을 만드세요.
        몇 개의 수를 입력 받을지 입력 받고, 그 갯수 만큼의 배열을 동적 할당을 통해서 만드세요.
        입력 받을 수 만큼 반복문을 통해 입력 받고, 배열에 저장하여 이를 출력 하세요.
     */
    
    int count = 0;
    printf("입력할 갯수를 입력 하세요 : ");
    scanf("%d", &count);
    
    int *numbers = (int *)malloc(sizeof(int) * count);
    
    for(int i = 0; i < count; i++) {
        printf("수를 입력 하세요 : ");
        scanf("%d", &numbers[i]);
    }
    
    for(int i = 0; i < count; i++) {
        printf("%d ", numbers[i]);
    }
    free(numbers);
    printf("\n");
    
    /*
        두개의 단어를 차례로 입력 받고, 이 단어를 합쳐서 저장 하는 문자열 변수를 만들고 그 결과를 출력 하세요.
        두 단어 사이는 ,(쉼표)로 구분 되게 저장 하세요.
        문자열 변수의 메모리 낭비가 없도록 하세요.
     */
    
    char word1[128];
    char word2[128];
    
    printf("단어를 입력 하세요 : ");
    scanf("%s", word1);
    printf("단어를 입력 하세요 : ");
    scanf("%s", word2);
    
    int twoWordSize = (int)(strlen(word1) + strlen(word2)) + 2;
    char *twoWord = (char *)malloc(sizeof(char) * twoWordSize);
    
    sprintf(twoWord, "%s,%s", word1, word2);
    
    printf("%s\n", twoWord);
    free(twoWord);
    
   
    return 0;
}

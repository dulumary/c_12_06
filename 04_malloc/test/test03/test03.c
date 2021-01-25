#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    /*
        int 포인터를 3개 저장 하는 배열을 두가지 방법으로 구현하세요.
     */
    
    int *intPointer1[3];
    int **intPointer2 = (int **)malloc(sizeof(int *) * 3);
    
    /*
        아래 이차원 배열로 저장된 문자열을 동적 메모리 할당을 통해서 새로운 배열에 저장 하고 출력 하세요.
     */
    
    char strings[][16] = {
        "hi", "hello", "good to see you"
    };
    
    char *stringsPointer[3];
    
    for(int i = 0; i < 3; i++) {
        stringsPointer[i] = (char *)malloc(sizeof(char) * strlen(strings[i]));
        strcpy(stringsPointer[i], strings[i]);
    }
    
    for(int i = 0; i < 3; i++) {
        printf("%s\n", stringsPointer[i]);
    }
    
    for(int i = 0; i < 3; i++) {
        free(stringsPointer[i]);
    }
    
    /*
        아래 주어진 2개의 배열을 int 포인터 배열을 통해서 이차원 배열 형태로 만들고, 이를 통해서 출력 하세요.
     */
    
    int numbers1[5] = {4, 2, 5, 4, 2};
    int numbers2[5] = {7, 8, 3, 7, 6};
   
//    int *numbersPointer[2];
    int **numbersPointer = (int **)malloc(sizeof(int *) * 2);
    
    numbersPointer[0] = numbers1;
    numbersPointer[1] = numbers2;
    
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 5; j++) {
            printf("%d ", numbersPointer[i][j]);
        }
        printf("\n");
    }
    
    /*
        아래와 같이 5개의 영화 제목이 구분자를 통해서 저장 되어 있다.
        이중 포인터를 이용해서 동적 메모리 할당으로 문자열을 저장 하고, 순서대로 출력하세요.
     */
    
    char movies[] = "Matrix:Iron Man:Avengers:X-Man:Dark Night";
    
    char **moviesArray = (char **)malloc(sizeof(char *) * 5);
    
    char *movie = strtok(movies, ":");
    int index = 0;
    while (movie != NULL) {
        moviesArray[index] = (char *)malloc(sizeof(char) * strlen(movie));
        strcpy(moviesArray[index], movie);
        
        movie = strtok(NULL, ":");
        index++;
    }
    
    for(int i = 0; i < 5; i++) {
        printf("%s\n", moviesArray[i]);
    }
    
    for(int i = 0; i < 5; i++) {
        free(moviesArray[i]);
    }
    
    free(moviesArray);
    
    /*
     
        문자열이 최대 32의 길이로 입력 가능하다.
        3개의 문자열을 입력 받고 저장을 할때, 메모리를 가장 아낄 수 있도록 프로그램을 작성하고, 출력하세요.
     */
    
    char input[32];
    char *inputStrings[3];
    
    for(int i = 0; i < 3; i++) {
        printf("문자열을 입력 하세요 : ");
        scanf("%s", input);
        inputStrings[i] = (char *)malloc(sizeof(char) * strlen(input));
        strcpy(inputStrings[i], input);
    }
    
    for(int i = 0; i < 3; i++) {
        printf("%s\n", inputStrings[i]);
        free(inputStrings[i]);
    }
}

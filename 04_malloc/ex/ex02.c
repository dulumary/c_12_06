#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char * argv[]) {

    char strings[][6] = {
        "one",
        "two",
        "three"
    };
    
    for(int i = 0; i < 3; i++) {
        printf("%s\n", strings[i]);
    }
    
    char *pointerStrings[3];
//    char **pointerStrings = (char **)malloc((sizeof(char *) * 3));
    
    pointerStrings[0] = (char *)malloc(sizeof(char) * 4);
    strcpy(pointerStrings[0], "one");
    
    pointerStrings[1] = (char *)malloc(sizeof(char) * 4);
    strcpy(pointerStrings[1], "two");
    
    pointerStrings[2] = (char *)malloc(sizeof(char) * 6);
    strcpy(pointerStrings[2], "three");
    
    
    for(int i = 0; i < 3; i++) {
        printf("%s\n", pointerStrings[i]);
    }
    
    for(int i = 0; i < 3; i++) {
        free(pointerStrings[i]);
    }
    
    int *scores[2];
//    int **scores = (int **)malloc(sizeof(int *) * 2);
    scores[0] = (int *)malloc(sizeof(int) * 3);
    scores[0][0] = 80;
    scores[0][1] = 90;
    scores[0][2] = 95;
    
    scores[1] = (int *)malloc(sizeof(int) * 3);
    scores[1][0] = 80;
    scores[1][1] = 75;
    scores[1][2] = 90;
    
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", scores[i][j]);
//            printf("%d ", *(*(scores + i) + j));
        }
        printf("\n");
    }
    
    for(int i = 0; i < 2; i++) {
        free(scores[i]);
    }

}

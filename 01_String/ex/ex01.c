#include <stdio.h>

int main() {

    char string[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
//    char string[6] = "Hello";
//    char string[] = "Hello";
    char string2[] = "World";
    
    printf("%s\n", string);
    printf("%s %s\n", string, string2);
    
    string2[3] = 'A';
    string2[4] = 'a';
    
    printf("%s\n", string2);
    
    int count = 0;
    for(int i = 0; i < 6; i++) {
        
        printf("%c", string[i]);
        
        if(string[i] == 'l') {
            count++;
        }
    }
    
    printf("\n");
    
    printf("l의 갯수는 %d\n", count);
    
    
    char inputString[1024];
    
    printf("단어를 입력하세요 : ");
    scanf("%s", inputString);
    
    printf("입력한 단어는 %s\n", inputString);
    
}

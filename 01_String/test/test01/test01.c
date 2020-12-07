#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    
    /*
       문자열 변수 세개를 이용해서 아래 문장을 출력 하세요.
     
        Oh My God
    */
    
    char string1[] = "Oh";
    char string2[] = "My";
    char string3[] = "God";
    
    printf("%s %s %s\n", string1, string2, string3);
    
    /*
        char noInit[7];
     
        위와 같이 선언 후 초기화 없이, char 하나 하나 입력 하여 아래 문자열을 저장 하여 출력 하세요.
        "Google"
     */
    
    char noInit[7];
    noInit[0] = 'G';
    noInit[1] = 'o';
    noInit[2] = 'o';
    noInit[3] = 'g';
    noInit[4] = 'l';
    noInit[5] = 'e';
    noInit[6] = '\0';
    
    printf("%s\n", noInit);
    
    
    /*
        id를 입력 받고, 아래와 같이 환영 메시지를 출력하세요.
        Welcom! hagulu 형태로 출력 하세요.
    */
    
    char id[32];
    
    printf("ID를 입력 하세요 : ");
    scanf("%s", id);
    
    printf("Welcom! %s\n", id);
    
    
    /*
        아래 문자열에서 A 를 B로 바꿔서 출력 하세요.
        char gradString[] = "My grade is A";
     */
    
    char gradString[] = "My grade is A";
    
    for(int i = 0; i < strlen(gradString); i++) {
        if(gradString[i] == 'A') {
            gradString[i] = 'B';
            break;
        }
    }
    
    printf("%s\n", gradString);
    
    
    /*
        영어 단어를 입력 받고 'e' 가 몇개 들어 있는지 출력 하세요.
     */
    
    char word[1024];
    
    printf("단어를 입력하세요 : ");
    scanf("%s", word);
    
    int count = 0;
    for(int i = 0; i < strlen(word); i++) {
        if(word[i] == 'e') {
            count++;
        }
    }
    
    printf("e의 개수는 %d개 입니다.\n", count);
   
    /*
        아래 문자열의 단어 개수를 출력 하세요.(중복 포함)
        char sentence[] = "To be, or Not to Be. That Is The Question";
     */
    
    char sentence[] = "To be, or Not to Be. That Is The Question";
    count = 0;
    for(int i = 0; i < strlen(sentence); i++) {
        if(sentence[i] == ' ') {
            count++;
        }
    }
    
    printf("문자열의 단어 개수는 %d개 입니다.\n", count + 1);
    
}

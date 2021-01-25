#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
    8자리로 표현된 생년 월일을 받고, 나이를 return 하는 함수를 만드세요.
 */

int getAge(char *birthdayString) {

    int birthday = atoi(birthdayString);
    int year = birthday / 10000;
    
    return 2020 - year + 1;
}

int main() {

    // 1. 나이 구하기
    
   char birthday[16];

   printf("생년월일을 입력하세요 : ");
   scanf("%s", birthday);

   int age = getAge(birthday);
   printf("나이 : %d살\n", age);


  /*
       주민등록 번호를 기호 없이 입력 받는다.
       생년월일 뒤에 - 를 포함한 형태로 바꾸어서 출력하세요.
   */

   char personID[32];

   printf("주민등록번호를 입력하세요 : ");
   scanf("%s", personID);

   char personID2[32];

   strcpy(personID2, personID + 6);

   personID[6] = '\0';

   printf("%s-%s\n", personID, personID2);

    /*
        스트링 함수를 이용해서 아래와 같은 형태로 출력 하세요.
     */
    
    char members[] = "유재석:010-1234-4567:강호동:010-9876-5432:조세호:010-1111-9999";
    
    char* pointer = strtok(members, ":");
    
    int i = 0;
    while(pointer != NULL) {
        
        if(i % 2 == 0) {
            printf("이름 : %s - ", pointer);
        } else {
            printf("전화 번호 : %s \n", pointer);
        }

        pointer = strtok(NULL, ":");
        i++;
    }
    
    /*
        해당 문장에서 nice 을 good 으로 바꾸고, 이를 출력 하세요
     */
    
    char string[] = "have a nice day";
    
    char *nicePoint = strstr(string, "nice");
    
    strncpy(nicePoint, "good", 4);
    
    printf("%s\n", string);
    
    return 0;
}

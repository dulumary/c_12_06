#include <stdio.h>
#include <string.h>

struct Class {
    char name[32];
    char teacher[16];
    char room[16];
};

typedef struct _Rectangle {
    int width;
    int height;
} Rectangle;

typedef struct _Person {
    char name[32];
    int age;
} Person;

typedef struct _Worktime {
    char name[32];
    int times[7];
} Worktime;

typedef struct _GradeCard {
    char name[32];
    int scores[3];
} GradeCard;


int main() {

    /*
        수업을 관리하는 구조체를 설계하세요.
        > 수업 이름, 강사, 강의실

        구조체 변수를 만들어서 아래와 같은 형태로 출력 하세요.
     */
    
    struct Class cClass = {.name = "c programming", .teacher = "kim", .room = "605"};
  
    printf("수업 이름 : %s \n", cClass.name);
    printf("강사 : %s \n", cClass.teacher);
    printf("강의실 : %s \n", cClass.room);
    
    /*
        사각형을 관리하는 구조체를 설계 하세요.
        > 가로, 세로

        구조체 변수를 만들고, 이를 이용해서 넓이를 구하고 아래와 같이 출력 하세요.
     */
    
    Rectangle rect = {5, 4};
    printf("가로 : %d 세로 : %d 인 사각형의 넓이는 : %d 입니다.\n", rect.width, rect.height, rect.width * rect.height);
    
    
    /*
        이름의 값이 잘 못 입력 되어 변경 해야 한다. name 을 "유재석" 으로 변경하고 아래와 같이 출력 하세요.
        선언된 부분은 수정 하지 않고 값을 변경하세요.
     */
    
    Person person = {"유재석", 48};
    
    strcpy(person.name, "김인규");
    person.age = 28;
    
    printf("%s는 %d살 입니다.\n", person.name, person.age);
    
    /*
        일한 시간이 위와 같을때, 시급이 10,500원인 경우 전체 임금을 계산하고 출력 하세요.
     */
    
    Worktime myWork = {"김인규", {8, 8, 8, 8, 6, 5, 0}};
    
    int pay = 0;
    
    
    for(int i = 0; i < 7; i++) {
        pay += 10500 * myWork.times[i];
    }
    
    printf("%s님의 임금 : %d원\n", myWork.name, pay);
    
    /*
        3개의 성적을 저장 할 수 있는, 성적표를 관리하는 구조체를 설계 하세요.
        > 학생 이름, 성적(3개)

        이름과 3개의 성적을 입력 받고,  평균을 구하여서 아래와 같이 출력 하세요
     
     */
    
    GradeCard card;
    
    printf("이름 : ");
    scanf("%s", card.name);
    
    for(int i = 0; i < 3; i++) {
        printf("성적 %d : ", i + 1);
        
        int score = 0;
        scanf("%d", &score);
        if(score < 0 || score > 100) {
            i--;
            printf("잘못 입력 하셨습니다. 다시 입력 하세요!\n");
            continue;
        }
        card.scores[i] = score;
    }
    
    int sum = 0;
    printf("%s 학생 성적표 \n", card.name);
    for(int i = 0; i < 3; i++) {
        printf("%d점 ", card.scores[i]);
        sum += card.scores[i];
    }
    
    printf("\n평균 : %.1f점\n", sum / 5.0);
    
    
    return 0;
}


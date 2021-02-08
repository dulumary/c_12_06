#include <stdio.h>
#include <string.h>

struct ScoreData {
    int score;
    char name[32];
};

typedef struct _Person {
    char name[32];
    int age;
} Person;

typedef struct _StudyTime {
    char name[32];
    int times[7];
} StudyTime;

typedef char alphabet;
typedef unsigned int price;

int main() {
    
    struct ScoreData scoreData1 = {.score = 100, .name = "국어"};
    struct ScoreData scoreData2 = {100, "국어"};
    
    printf("%s의 점수는 %d점 이다.\n", scoreData1.name, scoreData1.score);
    scoreData1.score = 80;
    
    sprintf(scoreData1.name, "%s", "수학");
    strcpy(scoreData1.name, "수학");
    
    printf("%s의 점수는 %d점 이다.\n", scoreData1.name, scoreData1.score);
    
    alphabet abc = 'A';
    price money = 1300;
    
    Person person = {.name = "김인규", .age = 25};
    
    printf("%s 의 나이는 %d살 이다.\n", person.name, person.age);
    
    StudyTime myStudy = {"김인규", {7, 10, 4, 5, 10, 6, 1}};
    myStudy.times[3] = 10;
    
    printf("%s 의 공부 시간은 ", myStudy.name);
    
    for(int i = 0; i < 7; i++) {
        printf("%d, ", myStudy.times[i]);
    }
    printf("\n");
    
    return 0;
}


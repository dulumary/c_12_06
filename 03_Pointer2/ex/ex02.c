#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {


    char* string = "Hello World!!";
    printf("%s\n", string);
    
    char *world = string + 6;
    printf("%s\n", world);
    
    char copyString[128];
    
    strcpy(copyString, string);
    printf("%s\n", copyString);
    
    strcpy(copyString, "cooooool");
    printf("%s\n", copyString);
    
    char copynString[128];
    strncpy(copynString, string, 5);
    printf("%s\n", copynString);
    
    strcpy(copynString, string);
    printf("%s\n", copynString);
    
    strncpy(copynString + 6, "Korea", 5);
    printf("%s\n", copynString);

    char *strString = strstr(string, "World");
    printf("%s\n", strString);
    
    char longString[] = "Fire in the hole";
    
    char* word = strtok(longString, " ");
    while (word != NULL) {
        
        printf("%s\n", word);
        
//        char wordCopy[128];
//        strcpy(wordCopy, word);
        word = strtok(NULL, " ");
    }

    return 0;
}

#include <stdio.h>
#include <string.h>

int main(){
    char word[15];
    int i;

    printf("enter a word: ");
    scanf("%s", word);
    for (i=strlen(word);i>=0; i--){
        printf("%c",word[i]);
    }
    return 0;
}
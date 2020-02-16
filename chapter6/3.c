#include <stdio.h>

int main(){
    char array[6] = "FEDCBA";
    int i;
    int j;
    for (i = 1; i < 7; i++){
        for (j=0;j<i;j++){
            printf("%c",array[j]);
        }
        printf("%c",'\n');
    }
}
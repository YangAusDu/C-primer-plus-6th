#include <stdio.h>

int main(){
    char letters[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int i;
    int j;
    int k = 0;
    for (i = 1; i < 7; i++){
        for (j=0;j<i;j++){
            printf("%c",letters[k++]);
        }
        printf("%c",'\n');
    }
}
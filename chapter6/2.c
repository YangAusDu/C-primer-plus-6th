#include <stdio.h>

int main(){
    int i;
    int j;
    for (i = 1; i < 6; i++){
        for (j=0;j<i;j++){
            printf("%s","$");
        }
        printf("%c",'\n');
    }
    return 0;
}
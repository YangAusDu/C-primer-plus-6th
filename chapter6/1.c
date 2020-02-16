#include <stdio.h>

/*print a-z using for loop*/
int main(){
    char array[26];
    int index;

    for(index = 0; index<26; index++){
        array[index] = 'a' + index;
    }
    printf("%s\n", array);

    return 0;
}
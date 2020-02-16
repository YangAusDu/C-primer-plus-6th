#include <stdio.h>
int main(void)
{
    int num[8];
    int index;
    
    printf("Enter 8 integers: ");
    for (index=0; index<8; index++)        
        scanf("%d", &num[index]);
    for (index=7; index >= 0; index--)	  
        printf("%d ", num[index]);
    printf("\n");

    return 0;
}
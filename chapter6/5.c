#include<stdio.h>
int main(void)
{
    char ch='A';
    int i,j,row;
    char letter;
    printf("Enter your letter: ");
    scanf("%c",&letter);
    row = letter - ch+1;
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=row-i;j++)
            printf(" ");
        for(j=0;j<i;j++)
            printf("%c",ch+j);
        for(j=i-2;j>=0;j--)
            printf("%c",ch+j);
        printf("\n");
    }
    return 0;
}

#include<stdio.h>
int main(void){
    int lower_bound, upper_bound,i;
    printf("Enter two numbers: ");
    scanf("%d",&lower_bound);
    scanf("%d",&upper_bound);
    printf("%10s %16s %16s\n", "Number", "Square", "Cube");
    for (i = lower_bound;i<= upper_bound; i++)
        printf("%10d     %10d      %10d\n", i, i*i, i*i*i);

    return 0;
}
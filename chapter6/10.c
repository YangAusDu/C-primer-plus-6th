#include<stdio.h>
int main(void){
    int lower_bound, upper_bound,i, sum;
    printf("Enter lower and upper integer limits: ");
    scanf("%d",&lower_bound);
    scanf("%d",&upper_bound);
    while (lower_bound < upper_bound){
        sum = 0;
        for (i = lower_bound;i<= upper_bound; i++){
            sum += i*i;
        }
        printf("The sum of squares from %d to %d is %d", lower_bound*lower_bound, upper_bound*upper_bound, sum);
        printf("\nEnter next set of limits: ");
        scanf("%d",&lower_bound);
        scanf("%d",&upper_bound);
    }
    

    return 0;
}
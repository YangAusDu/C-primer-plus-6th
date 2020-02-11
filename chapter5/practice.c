#include <stdio.h>

void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();
void problem7();
void problem8();
void cubic();
void problem9();
void Temperature(float Fahrenheit);

int main(void){
    problem7();
    /*problem2()
    problem3()
    problem4()
    problem5()
    problem6()
    problem7()
    problem8();*/
}

void problem1(){
    #define convertor 60;
    int time, minutes, hours;
    printf("Type your time: ");
    scanf("%d",&time);
    while(time > 0){
        hours = time / convertor;
        minutes = time % convertor;
        printf("hours: %d   minutes: %d\n", hours, minutes);
        printf("Type your time: ");
        scanf("%d",&time);
    }
    printf("Quit\n");
    
}

void problem2(){
    int number, upperbound;
    printf("Type your time: ");
    scanf("%d",&number);
    upperbound = number + 10;
    while (number <= upperbound){
        printf("%d\n", number++);
    }
}

void problem3(){
    int number_days, day, week;
    int DAY_PER_WEEK = 7;
    printf("Type your # of days: ");
    scanf("%d",&number_days);
    week = number_days / DAY_PER_WEEK;
    day = number_days % DAY_PER_WEEK;
    if(week > 1){
        printf("%d days is %d weeks and %d days.\n", number_days, week, day);
    }
    else{
        printf("%d days is %d week and %d days.\n", number_days, week, day);
    }
    
}

void problem4(){
    #define cm_per_inch 2.54;
    #define inch_per_foot 12;
    float height, inches;
    int feet;
    printf("Enter a height in centimeters: ");
    scanf("%f",&height);
    while(height > 0){
        inches = height / cm_per_inch;
        feet = (int)inches / inch_per_foot;
        inches = inches - feet * inch_per_foot;
        printf("%.1f cm = %d feet, %.1f inches.\n", height, feet, inches);
        printf("Enter a height in centimeters(<= 0 or quit): ");
        scanf("%f",&height);
    }
    printf("Bye\n");
}

void problem5(){
    int count,sum,days;
    printf("Input the number of days: ");
    scanf("%d",&days);
    count=sum=0;
    while(count++<days)
        sum=sum+count;
    printf("The money you earned: %d\n",sum);
}

void problem6(){
    int count,sum,days;
    printf("Input the number of days: ");
    scanf("%d",&days);
    count=sum=0;
    while(count++<days)
        sum=sum+count*count;
    printf("The money you earned: %d\n",sum);
}

void problem7(){
    double input;
    printf("Enter a number: ");
    scanf("%lf", &input);
    cubic(input);
}

void cubic(double input){
        printf("the cubic of this number is %lf \n", input*input*input);
}

void problem8(){
    int num1,num2;
    printf("This program computes moduli.\n");
    printf("Enter an integer to serve as the second operand: ");
    scanf("%d", &num1);
    printf("Now enter the first operand: ");
    scanf("%d", &num2);
    while(num2 > 0){
        printf("%d %% %d is %d\n",num2,num1,num2%num1);
        printf("Enter next number for first operand (<= 0 to quit): ");
        scanf("%d",&num2);
    }
    printf("Done\n");
}

void problem9(){
    float Fahrenheit;
    printf("Enter Fahrenheit temperature here: ");
    while(scanf("%f",&Fahrenheit)==1)
    {
        Temperature(Fahrenheit);
        printf("Enter Fahrenheit temperature here: ");
    }
    printf("Done.\n"); 
}

void Temperature(float Fahrenheit){
    const float a=5.0,b=9.0,c=32.0,d=276.13;
    printf("%.2f Fahrenheit is %.2f Celsius, %.2f Kelvin\n",Fahrenheit,a/b*(Fahrenheit-c),a/b*(Fahrenheit-c)+d);
}






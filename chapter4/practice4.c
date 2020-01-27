#include <stdio.h>
#include<string.h>
#include <float.h>




void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();
void problem7();
void problem8();

int main(void){
    /*problem1();*/
    problem8();/*
    problem3();
    problem4();
    problem5();
    problem6();
    problem7();
    problem8(); */
}


void problem1(void){
    char surname[30];
    char name[30];
    printf("Enter your name: ");
    scanf("%s",name);
    printf("Enter your surname: ");
    scanf("%s",surname);
    printf("Your name is: %s %s\n", name, surname);
}

void problem2(void){
    char name[30];
    int size;
    printf("Enter your name: ");
    scanf("%s",name);
    size = strlen(name)+3;
    printf("\"%s\"\n", name);
    printf("\"%20s\"\n", name);
    printf("\"%-20s\"\n", name);
    printf("\"   %s\"\n", name);
}

void problem3(void){
    float number;
    scanf("%f",&number);
    printf("%f\n %e\n",number,number );
}

void problem4(void){
    float height;
    printf("pls enter your height in cm: ");
    scanf("%f",&height);
    printf("Dabney, your height is %4.2f m.\n", height/100);
}

void problem5(void){
    float speed;
    float size;
    printf("pls enter your download speed(Mb/s): ");
    scanf("%f",&speed);
    printf("pls enter your size of your file(MB): ");
    scanf("%f",&size);
    printf("at %4.2f megabits per second, a file of %4.2f megabits\n" 
    "downloads at %4.2f seconds \n" ,speed, size, size*8/speed);
}

void problem6(void){
    char surname[30];
    char name[30];
    int size1, size2;
    printf("Enter your name: ");
    scanf("%s %s",name, surname);
    
    printf("%10s %10s\n", name, surname);
    size1 = strlen(name);
    size2 = strlen(surname);
    printf( "%10d %10d\n", size1, size2);
    printf("%-10s %-10s\n", name, surname);
    printf( "%-10d %-10d\n", size1, size2);
}

void problem7(void){
    double number1 = 1.0/3.0;
    float number2 = 1.0/3.0;
    printf("%20.6f     %20.6f\n", number1, number2);
    printf("%20.12f     %20.12f\n", number1, number2);
    printf("%20.16f     %20.16f\n", number1, number2);
    printf("%d      %d",FLT_DIG, DBL_DIG);
}


void problem8(void){
    #define KM_PER_MILE 1.609;
    #define LITER_PER_GALLON 3.785;
    double gas_gallon;
    double distance_km;
    double gas_liter;
    double distance_mile;

    printf("Distance(mile): ");
    scanf("%lf", &distance_mile);
    printf("gas consumption(gallon): ");
    scanf("%lf", &gas_gallon);
    distance_km = distance_mile * KM_PER_MILE;
    gas_liter = gas_gallon * LITER_PER_GALLON;
    printf("LITER/100KM = %5.1lf\n",gas_liter*100/distance_km );

  
    
    

}
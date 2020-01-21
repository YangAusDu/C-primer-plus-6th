
#include <stdio.h>

void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();
void problem7();
void problem8();

int main(void){
    problem1()
    problem2()
    problem3()
    problem4()
    problem5()
    problem6()
    problem7()
    problem8();
}


void problem1(void){
    float toobig = 3.4E38 * 100.0f;
    float toosmall = 0.1234E-40 / 10;
    printf("overflow: %e\n",toobig);
    printf("underflow: %e\n",toosmall);

}

void problem2(void){
    int ascii;
    printf("Please enter an ASCII code: ");
    scanf("%d", &ascii);
    printf("%c\n", ascii);
}

void problem3(void){
    putchar('\a');
    printf("startled by the sudden sound, Sally shouted,\n");
    printf("By the Great Pumpkin, what was that!\n");
}

void problem4(void){
    float number;
    printf("Enter a floating number: ");
    scanf("%f", &number);
    printf("fixed-point notation: %f\n", number);
    printf("exponential notation: %e\n", number);
    /*printf("p notation: %#x\n",number);*/
}

void problem5(void){
    float year = 3.156e7;
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("You have lived %f seconds\n",age*year);

}

void problem6(void){
    float water_molecule = 3e-23;
    int quart = 950;
    float water_amount;
    float molecule_per_quart = quart/water_molecule;
    printf("How many quart of water: ");
    scanf("%f", &water_amount);
    printf("Number of water molecule: %e\n", water_amount * molecule_per_quart);
}

void problem7(void){
    float cm;
    printf("Enter your height in cm: ");
    scanf("%f", &cm);
    float inch = 2.54 * cm;
    printf("Your height in inches: %0.3f\n", inch);
}

void problem8(void){
    float cups;
    printf("Enter number of cups: ");
    scanf("%f", &cups);
    float pint = 2 * cups;
    float ounce = cups/8;
    float big_spoon = ounce/2;
    float small_spoon = big_spoon/3;
    printf("pint: %f\nounce: %f\nbig spoon: %f\nsmall spoon: %f\n", pint, ounce, big_spoon, small_spoon);


}
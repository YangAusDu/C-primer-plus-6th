/*printing name and address*/

#include <stdio.h>
void practice2();
void practice3();
void practice4();
void jolly();
void deny();
void practice5();
void br();
void ic();
void practice6();
void practice7();
void smile();

int main(void){
    practice2();
    practice3();
    practice4();
    practice5();
    practice6();
    practice7();
}

/*-----------------------------------------*/
void practice2(void){
    printf("NAME: D.A.Y.\n");
    printf("ADDRESS: 16627 78 ave NW\n\n");
}

void practice3(void){
    int age = 24;
    int days;
    days = age * 365;
    printf("Days: %d\n\n", days);
}

void practice4(void){
    jolly();
    deny();
}

void jolly(void){
    printf("For he's a jolly good fellow.\n");
    printf("For he's a jolly good fellow.\n");
    printf("For he's a jolly good fellow.\n");
} 

void deny(void){
    printf("Which nobody can deny\n\n");
}

void practice5(void){
    printf("Brazil, Russia, India, China\n");
    ic();
    br();

}
void br(void){
    printf("Brazil, Russia,\n");
}

void ic(void){
    printf("India, China\n");
}

void practice6(void){
    int toss, toss_double, toss_square;
    toss = 10;
    toss_double = toss * 2;
    toss_square = toss * toss;
    printf("\ntoss: %d; toss_double: %d; toss_square: %d\n\n", toss, toss_double, toss_square);
}

void practice7(void){
    smile();
    smile();
    smile();
    printf("\n");
    smile();
    smile();
    printf("\n");
    smile();
    printf("\n");
}

void smile(void){
    printf("smile!");
}
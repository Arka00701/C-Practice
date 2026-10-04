#include <stdio.h>
#define RATE 5.0
// Write a program to calculate the simple interest. Provide a fixed rate of intrest by declaring symbolic constant 
// S.I - P*R*T/100

int main(void){
    float P ,R ,T,SI;
    printf("\n Enter Principal amount : ");
    scanf("%f",&P);

    printf("\n Enter Time in years : ");
    scanf("%f",&T);

    SI = (P*RATE*T)/100;
    printf("\n The S.I is : %f",SI);
}
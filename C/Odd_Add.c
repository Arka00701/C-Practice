#include <stdio.h>
#include <math.h>

int main(void){
    int a , b , sum;
    printf("Enter a = ");
    scanf("%d", &a);
    printf("Enter b = ");
    scanf("%d", &b);

    if(a%2!=0 && b%2!=0){
        sum = a+b;    
        printf("Sum = %d\n",sum);
    }
    else{
        printf("Invalid Input.");
    }
    return 0;
}
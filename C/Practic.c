// Pointer variable 

#include <stdio.h>



float calculator(float a, float b, char op)
{
    switch (op)
    {
        case '+':
            return a + b;

        case '-':
            return a - b;

        case '*':
            return a * b;

        case '/':
            return a / b;

        default:
            return 0;
    }
}

int main(void){
//     int first, second , *p,*q,sum;
//      printf("Enter two integers to add : ");
//      scanf("%d %d",&first , &second);
//      p=&first;
//      q=&second;
//      sum=*p+*q;
//      printf("Sum of entered numbers : %d \n",sum);


 float a, b, result;
    char op;

    printf("Enter two numbers: ");
    scanf("%f%f", &a, &b);

    printf("Enter operation (+, -, *, /): ");
    scanf(" %c", &op);

    if (op == '/' && b == 0)
    {
        printf("Division by zero is not possible.\n");
    }
    else if (op == '+' || op == '-' || op == '*' || op == '/')
    {
        result = calculator(a, b, op);
        printf("Result = %.2f\n", result);
    }
    else
    {
        printf("Invalid operation.\n");
    }




}


// To print Fibonacci Series

#include <stdio.h>

int main()
{
    int a=0,b=1,c;
    int n; // Series will run till the nth term

    printf("Enter a number : ");
    scanf("%d",&n);

    printf("Fibonacci Series : ");
    for(int i=0 ; i<n ; i++)
    {
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;

    }   
}
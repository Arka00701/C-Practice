// Notes of class for 1st october 2k26.
#include <stdio.h>

// void printname(int x) // Recursive function only
// {
//     if(x==0)
//         return;
//     else
//     {
//         // printf("Section G \n");
//         printname(x-1);
//         printf(" %d \n",x);
//         // printname(x-1);
//     }
// }


// int fact_reccursion(int g)
// {
//     if(g==0 || g==1)
//         return 1;
//     else
//     {
//         return g * fact_reccursion(g-1);
//     }
// }

void printNatural(int n)
{
    if(n==0)
      return;

    printNatural(n-1);
    printf("%d ",n);
}

int main(void)
{
    // int n;
    // printf("How many time you want to print your name : ");
    // scanf("%d",&n);
    // printname(n);


    // int m;
    // printf("Enter a number to do factorial : ");
    // scanf("%d",&m);
    
    // if(m<0)
    //     printf(" Factorial of a negative number does not exists :( ");
    // else
    // {
    //     int h = fact_reccursion(m);
    //     printf("Factorial of %d is : %d ",m,h);
    // }
        


    int j;

    printf("Enter j : ");
    scanf("%d ",j);

    printNatural(j);

}
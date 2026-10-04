// Notes of class 18.09.2026 i.e Friday.
// TOpic - Functions. 


#include <stdio.h>

// Type 1
// no return , no argument
// void sum(void)
// {
//     int a,b,ans;
//     printf("Enter a and b : ");
//     scanf("%d %d",&a,&b);
//     ans=a+b;
//     printf("The sum is %d \n",ans);
// }

// Type 2
// yes return, no argument
// int sum()
// {
//     int a,b;
//     printf("Enter a and b : ");
//     scanf("%d %d",&a,&b);
//     return(a+b);
    
// }


// Type 3
// no return , yes argument
// void sum(int x,int y)
// {
//     int ans;
//     ans=x+y;
//     printf(" \nThe sum is  %d",ans);
// }

// Type 4
// yes return , yes argument
int sum(int x,int y)
{
    int ans;
    ans=x+y;
    return ans;
}
int main(void)
{

// type 1
    // printf("Calling function sum. \n");
    // sum();
    // printf("End of the function sum and control back to main function :)");


// type 2
    // int ans;
    // ans=sum();
    // printf("The sum is %d : \n",ans);


// type 3
    // int a,b;
    // printf("Enter a and b : ");
    // scanf("%d %d",&a,&b);
    // sum(a,b);

// type 4
    int a,b,summ;
    printf("Enter a and b : ");
    scanf("%d %d",&a,&b);
    summ=sum(a,b);
    printf("Received answer in main is %d",summ);
}
// Notes of class 27_8_2026 , Thursday.
// Topic - Arrays continued.

#include <stdio.h>

int main(void)
{
    // int a[10];  // The size of the array is 10. 
    // printf("Enter 10 numbers : \n");
    // for(int i=0 ; i<10 ; i++)   // This loop is to take the input of the array.
    // {
    //     scanf("%d",&a[i]);
    // }
    // printf("The numbers are :");
    // for(int i=0 ; i<10 ; i++)
    // {
    //     printf("%d \t",a[i]);
    // }

    // int a[20];  // The size of the array is 10. 
    // printf("Enter 20 numbers : \n");
    // for(int i=0 ; i<20 ; i++)   // This loop is to take the input of the array of 20 elements.
    // {
    //     scanf("%d",&a[i]);
    // }
    // printf("The numbers are :");
    // for(int i=0 ; i<20 ; i++)
    // {
    //     printf("%d \t",a[i]);
    // }


// Program to wirte the sum and average of numbers <20
    // int a[20] = {0},i,n,sum=0;
    // float avg;
    // printf("Enter n(<=20) : ");
    // scanf("%d",&n);
    // printf("Enter %d elements : \n",n);
    // for(i=0 ; i<n; i++)
    // {
    //     scanf("%d",&a[i]);
    //     sum+=a[i];      // Calculate the sum of the elements
    // }
    // avg = (float)sum/n;
    // printf("Sum = %d & Average = %f",sum,avg);



// WAP to find the minimun and maximum input in an array.
// a={20,32,20,60,102,8}
// Min - 8 , Max - 102

    int i,max,min,n;
    int a[20]={0};
    
    printf("Enter n(<=20) : ");
    scanf("%d",&n);
    printf("Enter %d elements : \n",n);
    for(i=0 ; i<n ; i++)
    {
        scanf("%d",&a[i]);
    }
    max=min=a[0];
    for(i=0 ; i<n ; i++)
    {
        if(min>a[i])
            min = a[i];
        if(max<a[i])
            max=a[i];
    }
    printf("The Maximum number is : %d \n",max);
    printf("The Minimum number is : %d ",min);
}
// Notes of 31.08.2026 Monday
// Topic - Linear Search.

#include <stdio.h>

int main(void)
{
//     int n,ele,i,a[20]={0},flag=0;
//     printf("Enter no of elements (n<=20) : ");
//     scanf("%d",&n);
//     printf("Enter elements to be searched");
//     scanf("%d",&ele);

//     printf("Enter elemenst of array : \n");
//     for(i=0 ; i<n ; i++)
//         scanf("%d",&a[i]);

//     for(i=0 ; i<n ; i++)
//     {
//         if(ele==a[i])
//         {
//             flag++;
//         }
//     }
//     if(flag>0)
//     {
//         printf("%d found %d tiems",ele,flag);
//     }
//     else
//         printf("Not found");



    int n,ele,i,a[20]={0},flag=0,pos[20]={0};
    printf("Enter no of elements (n<=20) : ");
    scanf("%d",&n);
    printf("Enter elements to be searched : ");
    scanf("%d",&ele);

    printf("Enter elemenst of array : \n");
    for(i=0 ; i<n ; i++)
        scanf("%d",&a[i]);

    for(i=0 ; i<n ; i++)
    {
        if(ele==a[i])
        {
            pos[flag]=i+1;
            flag++;
        }
    }
    if(flag>0)
    {
        printf("%d found %d tiems ",ele,flag);
        printf(" at position");
        for(i=0 ; i<flag ; i++)
            printf("%d" , pos[i]);
    }
    else
        printf("Not found");



// WAP using array to input n number of inputs in an array and find largest consicutive sum of 3 contagious elements.
    int i,j,a[20]={0};

    printf("Enter no of elements (n<=20) : ");
    scanf("%d",&n);
    
}


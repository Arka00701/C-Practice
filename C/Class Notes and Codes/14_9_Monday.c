// Notes of 14.9.2026 i.e Monday 
// Topic - 2D Array.

#include <stdio.h>

int main(void)
{
    // int a[3][3]={1,2,3,4,5,6,7,8,9};
                
    // int i,j;

    // for(i=0 ; i<3 ; i++)
    // {
    //     for(j=0 ; j<3 ; j++)
    //     {
    //         printf("%d",a[i][j]);        
    //     }
    //     printf("\n");
    // }

// Do the same code but by taking input from the user.

    // int a[3][3]={0};
                
    // int i,j,row,col;

    // printf("Enter number of rows : ");
    // scanf("%d",&row);

    // printf("Enter number of columns : ");
    // scanf("%d",&col);
    // for(i=0 ; i<row ; i++)
    // {
    //     for(j=0 ; j<col ; j++)
    //     {
    //         printf("%d",a[i][j]);        
    //     }
    //     printf("\n");
    // }

    int a[3][3]={0};
    int b[3][3]={0};
                
    int i,j,row,col;

    printf("Enter number of rows : ");
    scanf("%d",&row);

    printf("Enter number of columns : ");
    scanf("%d",&col);

    printf("Enter the elements for array a[] : \n");
    for(i=0 ; i<row ;i++)
        for(j=0 ; i<col ; j++)
            scanf("%d",&a[i][j]);

    printf("Enter the elements for array b[] : \n");
    for(i=0 ; i<row ;i++)
        for(j=0 ; i<col ; j++)
            scanf("%d",&b[i][j]);

    int c[3][3]={0};
    for(i=0 ; i<row ;i++)
        for(j=0 ; i<col ; j++)
            c[i][j]+=a[i][j]+b[i][j];


    printf("The resultant array after addition is ...... \n");
    for(i=0 ; i<row ; i++)
    {
        for(j=0 ; j<col ; j++)
        {
            printf("%d",c[i][j]);        
        }
        printf("\n");
    }


// WAP using 2D array with user defined dimension to find minimum and maximum element in an array.(Same procedure as 1D array )

// WAP to find sum and average of an element in 2D Array (Same as 1D array)


}
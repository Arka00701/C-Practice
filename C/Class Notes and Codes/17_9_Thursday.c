// Notes of class for 17.09.2026
// Topic - Matrix multiplication.

#include <stdio.h>

int main(void)
{
    int a[3][3]={0},b[3][3]={0},c[3][3]={0};
    int i,j,k;

    // Input for first matrix
    printf("Enter elements for 3 X 3 first matrix : \n");
    for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    // Input for second matrix
    printf("Enter elements for 3 X 3 second matrix : \n");
    for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
            c[i][j]=0;
            for(k=0 ; k<3 ; k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }

    // Display the result
    printf("Product of the matrices : \n");
    for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
            printf("%d \t",c[i][j]);
        }
        printf("\n");
    }
}
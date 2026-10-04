#include <stdio.h>

void main()
{
    int a=2220;
    int b=30330;
    int c=322229;

    if(a>b)
    {
        if(b>c)
            printf("A is greatest.");
        else
            printf("C is greatest");
    }
    else
    {
        if(b>c)
            printf("B is greatest.");
        else
            printf("C is greatest.");
    }
}
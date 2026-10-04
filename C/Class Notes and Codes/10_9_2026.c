// Notes for class of 10.9.2026 i.e Thursday.

#include <stdio.h>
#include <string.h>


int main(void)
{

// program to copy one string to another.
    // char str1[30]={'\0'},str2[20]={'\0'},str3[20]={'\0'};
    // int i;
    // printf("Enter the string : ");
    // scanf("%29s", str1);
    // strcpy(str2,str1);
    // printf("\n The copied string using in-built function is --> %s",str2);

    // i=0;
    //     while(str1[i]!='\0')
    //     {
    //         str3[i]=str1[i];
    //         i++;
    //     }
    //     str3[i]='\0';

    // printf("\n The copied string manually is --> %s \n",str3);



// Program to concatinate.
    // char str1[30]={'\0'},str2[20]={'\0'},str3[20]={'\0'};
    // int i,j;
    // printf("Enter first string : ");
    // scanf("%s", str1);
    // printf("Enter second string : ");
    // scanf("%s", str2);
    // strcat(str2,str1);
    // printf("\n The concatinated string using in-built function is --> %s",str2);

    // i=0;
    //     while(str1[i]!='\0')
    //         i++;
    // j=0;
    //     while(str2[i]!='\0'){
    //     str1[i]=str2[j];
    //     i++,j++;
    //     }
    // str1[i]='\n';
    // printf("\n The concatinated string manually is --> %s \n",str2);


    char str[30]={'\0'},strev[20]={'\0'};
    int i,j;
    printf("Enter the string : ");
    scanf("%s",str);

    printf("\n The original string is --> %s \n",str);
    char temp;
    i=0;
    j=(strlen(str)-1);
    strev[strlen(str)]='\n';

    while(i<=strlen(str))
    {
        strev[j]=str[i];
        i++;
        j--;
    }
    printf("\n The reverse string is --> %s \n",strev);
}
// Notes of class 8.9.2026
// Topic - Strings

#include <stdio.h>
#include <string.h>

int main(void)
{
    // char str1[10] = {"SMIT"},str2[10]={'G','a','n','g'};    
    // char str3[10]={"\0"}, str4[10]={"\0"};
    // str3[0]='S';
    // str3[1]='i';
    // str3[2]='k';
    // str3[3]='k';
    // str3[4]='i';
    // str3[5]='n';
    // printf("Enter the string : ");
    // scanf("%s",str4);
    // printf("Str1->%s \n str2->%s \n str3->%s \n str4->%s \n",str1,str2,str3,str4);

    char str[10];
    int len , i ,length=0;
    printf("Enter the first string : ");
    scanf("%d",str);
    len=strlen(str);

    printf("\n The length is %d (using inbuilt function) \n",len);
    i=0;

    while(str[i]!='\0')
    {
        length++;
        i++;
    }
    printf("\n The length is %d (user ) \n",length);

}
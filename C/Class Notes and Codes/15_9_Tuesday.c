// Notes of class of 15_9_2026 i.e Tuesday.


#include <stdio.h>
#include <string.h>
#define KC 6174


int main(void)
{
// Keprekar's Constant.
    int a[4]={0};
    int num,d1=0,d2=0,d3=0,d4=0,min,max,flag=1,i,j,temp,current;
    A:
        printf("Enter the 4 digit number for finding Keprekar's constant : ");
        scanf("%d",&num);

        while(flag)
        {
            current=num;
            d1=current%10;
            current=current/10;
            d2=current%10;
            current=current/10;
            d3=current%10;
            current=current/10;
            d4=current%10;

            a[0]=d1 ; a[1]=d2 ; a[2]=d3 ; a[3]=d4;

            if(a[0]==a[1] && a[0]==a[2] && a[2]==a[3] && a[1]==a[3])
            {
                printf("Invalid number , all four digit cannot be same \n"); goto A;
            }
            for(i=0 ; i<4 ; i++)
            {
                for(j=0 ; j<4-1-i ; j++)
                {
                    if(a[j]>a[j+1])
                    {
                        temp=a[j];
                        a[j]=a[j+1];
                        a[j+1]=temp;
                    }
                }
            }
            min= a[0]*1000 + a[1]*100 + a[2]*10 + a[3];
            max= a[3]*1000 + a[2]*100+ a[1]*10 + a[0]; 

            num=max-min;
            printf("STEP %d ---> %d-%d=%d \n",flag,max,min,num);
            flag++;

            if(num==KC)
            {
                printf("\n Constant found ---> end of step\n");
                break;
            }
        }


    // char str[20]={'\0'},sub[20]={'\0'},strext[20]={'\0'};
    // int i,j,lenstr,lensub,k=0;

    // printf("Enter the main string :: ");
    // scanf("%s",str);

    // printf("Enter the sub string to be checked :: ");
    // scanf("%s",sub);

    // lenstr=strlen(str);
    // lensub=strlen(sub);

    // for(i=0 ; i<=lenstr-lensub ; i++)
    // {
    //     k=0;
    //     for(j=i ; j<i+lensub ; j++)
    //     {
    //         strext[k]=str[j];
    //         k++;
    //     }
    //     strext[k]='\0';

    //     if(strcmp(strext,sub)==0)
    //         printf("\n extracted sub string ----->%s (match)",strext);
    //     else
    //         printf("\n extracted sub string ------>%s",strext);
    // }
}
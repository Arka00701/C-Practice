// This are the notes of the class of 11.08.2026 i.e Tuesday.
// Today's Topic - goto operation and LOOP.


#include <stdio.h>
#include <stdlib.h>

int main(void){

    // Goto will also not check and directly go into the line. It is an unconditional branching statement.
    // printf("Start \n");
    // goto b; // IT goes to b part

    // a : 
    // printf("A part \n");
    // goto c; // It goes to c part after comming from b part.
    
    // b :
    // printf("B part \n");
    // goto a;  // It goes to a part after comming from the start statement.

    // c :
    // printf("End \n");


    // int num;
    // printf("Enter number : ");
    // scanf("%d",&num);
    // if(num%2==0)
    // goto even;
    // else
    // goto odd; 

    // odd : 
    //     printf("Odd \n");
    //     goto end;
    // even : 
    //     printf("Even \n");
    //     goto end;

    // end : 
    //     printf("Thank You");



// LOOP 
// Loop - Ceretal controll and counter controll loop.
// Loop is not controlled then it is known as ceretal control loop.

   int i,n;
   printf("Enter n : ");
   scanf("%d",&n);
    for(i=0 ; i<n ; i++){
        printf("\033[31m%d\t\033[0m",i);

    }
}
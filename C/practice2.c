#include <stdio.h>
#include <math.h>

void main(){
    int a,b,ans;
    printf("Enter the value of a^b");
    scanf("%d %d",&a,&b);
    ans = pow(a,b);
    printf("The ans is %d",ans);
}
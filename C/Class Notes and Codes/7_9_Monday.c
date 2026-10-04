// Notes for class of 07.09.2026 i.e Monday
// Topic - Binary Search.

#include <stdio.h>
// Array should be sorted for binary search. If not sorted then sort it first. 
int main(void)
{
    int n,i,j;
    printf("Enter value of n : ");
    scanf("%d",&n);
    
    int a[20] = {0};
    printf("Enter the array elements : "); // If user does not enter eleemnts in sorted order , then program will not work. If user performs randomlu, then you need to go for bubble sort first and then search it.
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d",a[i]);
    }

 // Bubble sort to sort the elemenents.
    int temp;
    for(i = 0; i < n -1; ++i) {
    for(j = 0; j < n - i - 1; ++j){
        if(a[j] > a[j + 1]){
            temp = a[j];
            a[j] = a[j + 1];
            a[j + 1] = temp;
        }
    }
 }

    int ele;
    printf("Enter the element to be searched : ");
    scanf("%d",&ele);

    int first=0 , last=n-1 ,mid=0;
    mid=(first+last)/2;
    if(first<=last)
        first=mid+1;
    else
        last=mid-1;

    printf("Found.");
    while(first==last)
    {
        if(a[n]==ele)
        {
            printf("Found");
            break;
        }
        else if(a[n]>ele)
        {
            first=n-1;
        }
    }
}
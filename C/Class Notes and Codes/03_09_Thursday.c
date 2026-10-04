// Notes of class of 03.09.2026 i.e Thursday.

#include <stdio.h>

int main(void)
{
 // Bubble Sort.
 int a[20] = {0};
 int j, n, temp;
 printf("Enter n: ");
 scanf("%d", &n);
 printf("Enter the elements: ");
 
 for (int i = 0; i < n; ++i){
    scanf("%d", &a[i]);
 }

 for(int i = 0; i < n -1; ++i) {
    for(int j = 0; j < n - i - 1; ++j){
        if(a[j] > a[j + 1]){
            temp = a[j];
            a[j] = a[j + 1];
            a[j + 1] = temp;
        }
    }
 }
 printf("\nSorted array: ");
 for (int i = 0; i < n; ++i){
    printf(" %d ", a[i]);
 }

}
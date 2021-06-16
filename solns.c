/* Enter your solutions in this file */
#include<stdio.h>
int max(int a[ ], int n)
{
    int i;
    
    int max = arr[0];
 
    for (i = 1; i < n; i++){
        if (arr[i] > max){
            max = arr[i];
 }
 }
 return max;
}
 
int main(void)
{
    int a[ ] = {10, 324, 45, 90, 9808};
    int n = sizeof(a)/sizeof(a[0]);
    printf("Maximum integer in given array is %d", max(a, n));
    return 0;
}

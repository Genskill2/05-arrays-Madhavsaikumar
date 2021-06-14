/* Enter your solutions in this file */
#include<stdio.h>
int n;int i;
int max(int a[],n);
int main(void){
int n;int i;int a[];int max；
n = get_int("enter the total elements of array");
for(i=0;i<n;i++){
a[i] = get_int("enter the %i number",i+1);
}
max = a[0];
for(i=1;i<;i++)[
if(a[i]>max){
max = a[i];
}
}
printf("maximum of the given numbers in array is %d\n”,max);
}

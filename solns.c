/* Enter your solutions in this file */
#include<stdio.h>
#include <assert.h>
int max(int [], int);
int main(void) {
  int x[] = {9,5,6,10,2,-3,4};
  assert (max(x, 7) == 10);

  int y[] = {5};
  assert (max(y, 1) == 5);
  printf("Max: passed\n");
  }
int n;int i;
int max(int a[n],int n);
int main(void){
int a[n];int max；
int max(int [], int);
max = a[0];
for(i=1;i<n;i++){
if(a[i]>max){
max = a[i];
}
}
printf("maximum of the given numbers in array is %d\n”,max);
}

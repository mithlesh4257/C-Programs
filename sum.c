#include<stdio.h>

int main(){
//initialize array
int a[10]={1,23,34,35,6,99,0,8,3,4},
i, // this is for iteration
sum=0; // assume this to add 
for(i=0;i<10;i++)
{
  sum = sum+a[i];
  // this is done to sum at each step and assign new value to sum
}
//print sum
printf("%d",sum);

return 0;
}

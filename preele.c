#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int computeAns(unsigned long int *h,int size);

int computeAns( unsigned long int *h,int size){
//odd
int c=0,i;
if(size%2 !=0){
 for(i=0;i<size;i++){
  if(h[i] == h[size-1-i]){
  c++;
   }
  }
  if(c==size-1){
  return 1;
  }
  else{
  return 0;
  }
 }
}



int main(){
 int T,t=0;
 scanf("%d",&T);
 if(T>=1 && T<=10){
 int *Re;
 Re = (int*)malloc(sizeof(int)*T);
  for(t=0;t<T;t++){
   int n;
   scanf("%d",&n);
   if(n>=2 && n<=100000){
unsigned long int *h;
    h = (unsigned long int*)malloc(sizeof(unsigned long int)*n);
    int i=0;
    for(i;i<n;i++){
     scanf("%ld",&h[i]);
     if(h[i]>=1 && h[i]<=1000000000){
    Re[t] = computeAns(h,n);
    }
    }
    
   } 
  }
  int k=0;
  for(k=0;k<T;k++){
  printf("%d\n",Re[k]);
  }
 }
return 0;
}

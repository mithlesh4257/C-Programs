#include<stdio.h>
#include<stdlib.h>
void getResult(int n);
void getResult(int n){
 int *array;
 array = (int*)malloc(sizeof(int)*500);
 int i,j,k,l=0;
 for(i=1;i<=500;i++){
  for(j=1;j<=500;j++){
   for(k=1;k<=500;k++){
    if(k != i+j){
     array[l++] = i;
     array[l++] = j;
    }
   }
  }
 }
int lk;
 for(lk=0;lk<n;lk++){
  printf("%d",array[k]);
 }
}

int main(){
 int T,t;
 scanf("%d",&T);
 if(T>=1 && T<=100){
 int Re[T];
  for(t=0;t<T;t++){
      int n;
      scanf("%d",&n);
 	getResult(n);     
  }
 }
}

#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int prime(int a){
 int n=2;
 for(n;n<a;n++){
 if(a%n==0){
   return 0;
 }
 }
 return 1;
}

int main(){
 int a,s,z[100],i=0,q=0;
 scanf("%d %d",&a,&s);
 for(a;a<=s;a++){
  if(prime(a) == 1){
   z[i] =a;
   i++;
   }
  }
  int k=0;
  int prev=0,curr=0;
  for(k;k<=i;k++){
   curr +=1;
   if(z[curr]-z[prev] == 2){
    q++;
    }
    prev = curr;

  }
 printf("%d",q);	
 
 return 0;
}


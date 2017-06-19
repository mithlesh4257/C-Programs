#include<stdio.h>
#include<stdlib.h>
int main(){
 int T,t;
 scanf("%d",&T);

 if(T>=1 && T<=100){
   int *Result;
  Result = (int*)malloc(sizeof(int)*T);
for(t=0;t<T;t++){
  int n,m;
  scanf("%d %d",&n,&m);
  if(n>=2 && n<=100){
   if(m>=1 && m<=n/2){
    int i=0;
    int *a,*b;
    a = (int *)malloc(sizeof(int)*m);
    b = (int *)malloc(sizeof(int)*m);
    for(i;i<m;i++){
     scanf("%d %d",&a[i],&b[i]);
     }
    if(n%2 !=0){
     Result[t] = 0;

     }
     else if(n%2==0){
     Result[t] = 1;

     }
   }
  }
  

 }
 
int k=0;
for(k;k<T;k++){
if(Result[k] == 1){
printf("yes\n");
}
else if(Result[k]==0){
printf("no\n");
}

}
 
 }
 

return 0;
}

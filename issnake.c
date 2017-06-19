#include<stdio.h>
#include<stdlib.h>

int getOutput(int n,char a[2][n]);
int getOutput(int n,char a[2][n]){
 int i,j,c=0,d=0;
 if(n>2){
 for(i=0;i<n;i++){
 if(a[0][i] == '#'){
 c++;
 }
 if(a[1][i] == '#'){
 d++;
 }
 }
 if(c==d){
 return 1;
 }
 else{
 return 0;
 }
 }
 if(n<=2){
  if(a[0][0] =='#' && a[0][1]=='#'){
  return 1;
  }
    else if(a[1][0] =='#' && a[1][1]=='#'){
    return 1;
    }
       else if(a[0][0] =='#' && a[1][0]=='#'){
    return 1;
    }
         else if(a[0][1] =='#' && a[1][1]=='#'){
    return 1;
    }
    else{
    return 0;
    }
 }
}
int main(){
int T,t;
scanf("%d",&T);
int Re[T];
if(T>=1 && T<=500){
 for(t=0;t<T;t++){
  int n;
  scanf("%d",&n);
  if(n>=1 && n<=500){
   char arr[2][n];
   int i,j;
   for(i=0;i<2;i++){
   
    scanf("%s",arr[i]);
   
   }
  Re[t] =  getOutput(n,arr);
  }

 }
 int d=0;
 for(d=0;d<T;d++){
 Re[d]==1?printf("yes\n"):printf("no\n");
 }
}
return 0;
}

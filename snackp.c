#include<stdio.h>
#include<stdlib.h>
int computeResult(long int N,long int K,int M,int m[M][4]);
int computeResult(long int N,long int K,int M,int m[M][4]){
 int matrix[M][M],i,j;
 for(i=0;i<M;i++){
 for(j=0;j<M;j++){
 matrix[i][j] = 0;
 }
 }
 //fill for poision
  for(i=0;i<M;i++){
 for(j=0;j<M;j++){
 matrix[i][j] = -1;
 }
 }
 
 //filling snakes
 
 
 return 0;
}
int main(){
int T,t;
scanf("%d",&T);
if(T>=1 && T<=4){
int *Re;
Re = (int*)malloc(sizeof(int)*T);
 for(t=0;t<T;t++){
 long int N,K;
 int M;
 scanf("%ld %ld %d",&N,&K,&M);
 if(N>=3 && N<=1000000000 && N%2 != 0){
 if(K>=1 && K<=N-2 && K%2 != 0){
 if(M>=1 && M<=100000){
 int i,j,m[M][4];
 for(i=0;i<M;i++){
 for(j=0;j<4;j++){
 scanf("%d",&m[i][j]);
 if(m[i][j]>N && m[i][j]<1 ){
 return 0;
 }
 }
 }
 Re[t] = computeResult(N,K,M,m);
 }
 }
 }
 }
}
return 0;
}

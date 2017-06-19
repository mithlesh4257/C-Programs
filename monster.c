#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void print(int h[],int n);
int findNonNegative(int arr[],int n);
void getMin(int h[],int n);
int getMaxMonsters(int n, int hit, int t, int h_size, int* h);

int findNonNegative(int arr[],int n){
int i;
getMin(arr,n);
for(i=0;i<n;i++){
if(arr[i]>0){
break;
}
}
return i;
}


void getMin(int h[],int n){
int i=0,j=0,temp;
for(i=0;i<n-1;i++){
for(j=0;j<n-1-i;j++){
if(h[j]>h[j+1]){
temp = h[j];
h[j] = h[j+1];
h[j+1] = temp;
}
}
}

}

void print(int h[],int n){
int i=0;
for(i;i<n;i++)
printf(" %d ",h[i]);
printf("\n");
}

int getMaxMonsters(int n, int hit, int t, int h_size, int* h){
int i,j,m;

int counter=0;
getMin(h,n);
for(j=0;j<t;j++){
i = findNonNegative(h,n);
h[i] = h[i]-hit;

}
for(m=0;m<n;m++){
if(h[m] <=0){
counter++;
}
}
return counter;
}

int main(){
int n; 
    int hit; 
    int t,h_i; 
    scanf("%d %d %d", &n, &hit, &t);
    int *h = malloc(sizeof(int) * n);
    for(h_i = 0; h_i < n; h_i++){
       scanf("%d",&h[h_i]);
    }
    int result = getMaxMonsters(n, hit, t,n, h);
  printf("%d\n", result);
    return 0;
}

#include<stdio.h>

void f(int n){
if(n<=0) return;
printf("%d",n);
f(n-1);
printf("%d",n);
}

int main(){
char arr[100]="Dennis Ritchie";
char *p = arr+7;
printf("%s",p);

}

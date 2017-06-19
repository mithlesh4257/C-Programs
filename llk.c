#include<stdio.h>

int main(){
int n;
char str[10];
scanf("%[^0-9]%d",str,&n);
printf("%s %d\n",str,n);
}

#include<stdio.h>
#include<stdlib.h>
int o(char i){
int s;
s = (int)i;
return s;
}
int main(){
char a[50]="Hello World";int i;

//scanf("%s",a);

for(i=0;i<20;i++){ printf("%c : %d",a[i],o(a[i]));printf("\n");}
return 0;
}

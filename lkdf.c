#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
char *arrayS,*arrayT;
arrayS = (char*)malloc(sizeof(char)*1000);
arrayT = (char*)malloc(sizeof(char)*1000);

int i;
for(i=0;i<10;i++){
arrayS[i] = (char)i;
}

printf("%s",arrayS);
return 0;
}

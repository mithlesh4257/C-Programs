#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char * Func(char * s){
int i=0;
char *t;
t  = (char*)malloc(sizeof(char)*1000);
for(i;i<strlen(s);i++){

if(s[i]=='1'){
s[strlen(s)+i] = '0';
t[i] = '0';
}
else{
s[strlen(s)+i] = '1';
t[i] = '1';
}
}
return t;
}

int main(){
char *s;
char *t;
s  = (char*)malloc(sizeof(char)*1000);

s[0] = '0';
int i=0,n,k=0;
scanf("%d",&n);
while(i<n){
t =Func(s);
i++;
}

while(k<n){
int a;
scanf("%d",&a);
printf("%c\n",s[a]);
k++;
}


}

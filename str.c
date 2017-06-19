#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct point {
char st[100];
char a;
};
int main(){
struct point pt;
int i,j,len=0,l=0;
scanf("%s %c",pt.st,&(pt.a));
l = strlen(pt.st);
for(i=l;i>=0;i--){
if(pt.st[i]==pt.a)
break;
}
for(j=i;j<=l;j++){
printf("%c",pt.st[j]);
}
len = l-i;
printf("\n%d",len);
return 0;
}

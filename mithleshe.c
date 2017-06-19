#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(){
char s[1000],t[1000];
s[0] = (char)(0);

int i,j,k;
for(i=0;i<1000;i++){
for(j=0;j<=i;j++){
t[j] = (char)(1-(int)s[j]);

}
strcat(s,t);
}
printf("%s \n\n %s",s,t);

return 0;
}

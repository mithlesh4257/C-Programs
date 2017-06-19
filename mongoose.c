#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int getResults(char *s);
int getResults(char *s){
 int i,l=strlen(s),se=0;
 for(i=0;i<l;i++){
  if(s[i] == 'm'){
   if(s[i+1]=='s'){
    se+=1;
    continue;
   }
   if(s[i-1]=='s'){
     se+=1;

   }
  }
 }
 int mon=0,sn=0;
 for(i=0;i<l;i++){
  if(s[i] == 'm'){
   mon+=1;
  }
  if(s[i] == 's'){
   sn+=1;
  }
 }
 
 if(mon > sn-se){
  return 1;
 }
 else if(mon == sn-se){
  return 0;
 }
 else if(mon < sn-se){
  return 2;
 }
}

int main(){
int T,t;
scanf("%d",&T);
int Re[T];
for(t=0;t<T;t++){
 char * s;
 s = (char*)malloc(sizeof(char)*T);
 scanf("%s",s);
 Re[t] = getResults(s);
}
int i=0;
for(i;i<T;i++){
 if(Re[i]==1)
  printf("mongooses\n");
  else if(Re[i] == 0)
   printf("tie\n");
 else if(Re[i] == 2)
   printf("snakes\n");
}
return 0;
}

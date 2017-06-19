#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int not_all_zero(char *S);
char * flipflop(char *S);
int zero_counter(char *S);

int not_all_zero(char *S){
int counter=0;
int i=0;
for(i=0;i<strlen(S);i++){
if(S[i] == '0'){
counter++;
}
}
if(counter == strlen(S))
return 0;
else
return 1;
}

int zero_counter(char *S){
int counter=0;
int l=strlen(S);
if(S[l-1]=='0')
counter++;
return counter;
}

int zero_from_last(char *S){
 int counter=0,i=0;
 for(i=strlen(S)-1;i>=0;i--){
 if(S[i]=='0'){
  counter++;
 }
 }
 return counter;
}

char * flipflop(char *S){
int i=0;
for(i;i<strlen(S);i++){
int v=zero_from_last(S);
 if(S[i] == '0' && S[v] != '0'){
  S[i] = '1';
  
  }
 else
  S[i] ='0';
}
return S;
}


int main(){
char *S;
S = (char *)malloc(sizeof(char)*100000);
scanf("%s",S);
while(not_all_zero(S)){
S = flipflop(S);
}
printf("%s",S);
return 0;
}

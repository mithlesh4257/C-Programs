#include<stdio.h>

int main(){

char c;

int ca=0,ch=0,cb=0,cp=0,cs=0,cu=0,c1=0,c2=0,i,j;
for(i=0;i<18;i++){
for(j=0;j<3;j++){
scanf("%c",&c);

if(c=='a'){
ca++;
}
if(c=='b'){
cb++;
}
if(c=='h'){
ch++;
}

if(c=='p'){
cp++;
}
if(c=='u'){
cu++;
}
if(c=='1'){
c1++;
}
if(c=='2'){
c2++;
}
if(c==' '){
cs++;
}
}
}


printf("counter a: %d",ca);
printf("\ncounter h: %d",ch);
printf("\ncounter b: %d",cb);
printf("\ncounter u: %d",cu);
printf("\ncounter p: %d",cp);
printf("\ncounter 1: %d",c1);
printf("\ncounter 2: %d",c2);
printf("\ncounter space: %d",cs);
return 0;
}

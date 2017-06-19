#include<stdio.h>
int main(){

int i=0,j=0;
char ch[6][35];
for(i=0;i<6;i++){
for(j=0;j<35;j++){
ch[i][j]=' ';
}
}

for(i=0;i<6;i++){
for(j=0;j<35;j++){
scanf("%c",&ch[i][j]);
}
}

for(i=1;i<6;i++){
for(j=0;j<30;j++){
printf("%c",ch[i][j]);
}
printf("\n");
}
printf("\n");
return 0;
}

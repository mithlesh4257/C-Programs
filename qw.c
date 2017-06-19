#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main(){


FILE *fp;
long pos;

int c,i=0;
fp = fopen("temp.txt", "r");
char str[10];
fseek(fp,0L,SEEK_SET);
while((c=fgetc(fp)) != EOF){
fscanf(fp,"%s",str);
i++;
}
printf("%s",str);
return 0;



}

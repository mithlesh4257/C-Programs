#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int counter[200];
char * concati(char * s1,char *s2){
char *s;
s = (char*)malloc(sizeof(char)*200);
int i,j,k=0;

for(i=0;i<strlen(s2);i++){
for(j=0;j<strlen(s1);j++){
if(s2[i]==s1[j]){
s[k] = s1[j];
counter[k] += 1;
}

}
}

return s;
}
int main(){
char a1[100],a2[100];
scanf("%s %s",a1,a2);
char *newstring;
newstring = (char*)malloc(sizeof(char)*200);
newstring = concati(a1,a2);
int i;


for(i=0;newstring[i] != '\0';i++){
printf("%d : %c",counter[i],newstring[i]);
printf("\n");
}

return 0;
}

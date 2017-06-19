#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int strLen(int *p);
int * stringCat(int *s1,int *s2);

int * stringCat(int *s1,int *s2){
int *a;
a = (int *)malloc(sizeof(int)*1000);
int i;
int k = strLen(s1);
//for(i=0;i<k;i++){
//*(a+i) = *(s1+i);
//}
for(i=k;i<strLen(s1)+strLen(s2);i++){
*(s1+i) = *(s2+i);
}
return s1;
}

int strLen(int *p){
int i,c;
for(i=0;*(p+i) != '\0';i++){
c++;
}
return c;
}

int main(){
int *s,*t,*se;
s = (int *)malloc(sizeof(int)*1000);
t = (int *)malloc(sizeof(int)*1000);
se= (int *)malloc(sizeof(int)*1000);
int i,j;
*(s+0) =0;
for(i=0;i<1000;i++){
for(j=0;j<=i;j++){
*(t+j) = 1-*(s+j);

}
s = stringCat(s,t);
}
printf("\n");
for(i=0;i<strLen(s);i++){
printf("%d",*(t+i));
}

return 0;
}



#include<stdio.h>
#include<stdlib.h>

int main(int argc, int *argv[]){
FILE *fp;
fp = fopen("ip-addresses.txt","r+");
int e;int a[20],b[20],c[20],d[20],i=0;

while((e=fgetc(fp)) !=EOF){

fscanf(fp,"%d.%d.%d.%d",&a[i],&b[i],&c[i],&d[i]);
i++;

}
for(i=19;i>=0;i--)
printf("%d.%d.%d.%d\n",a[i],b[i],c[i],d[i]);
return 0;
}

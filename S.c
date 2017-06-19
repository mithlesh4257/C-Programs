#include<stdio.h>
int main(){

int b[][2][2][2] = {2,2,2,2};
//int b[][][][2] = {2,2,2,2};
//int c[2][2][2][] = {2,2,2,2,2,2,2,2};
//int d[2][][][] = {2,2,2,2};
long unsigned int a[2][3][4];
printf("%d %d",sizeof(a[1]),sizeof(a[1][2]));
return 0;
}

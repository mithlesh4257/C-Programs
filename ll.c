#include<stdio.h>
int main(){
int n=2;
int a[n][n],b[n][n],x[n*n][n*n];
int i,j,k,l;

a[0][0] = 1;
a[0][1] = 2;
a[1][0] = 3;
a[1][1] = 4;
b[0][0] = 0;
b[0][1] = 5;
b[1][0] = 6;
b[1][1] = 7;

for(i=0;i<n;i++)
{
for(l=0;l<n;l++)
{

for(j=i*n;j<(i+1)*n;j++)
{
for(k=l*n;k<(l+1)*n;k++)
{

x[j][k] = a[i][l]*b[j%n][k%n];

}
}

}

}


for(i=0;i<n*n;i++){
for(j=0;j<n*n;j++){
printf("%d ",x[i][j]);

}
printf("\n");
}

return 0;
}

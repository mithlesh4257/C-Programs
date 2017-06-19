#include<stdio.h>
#include<stdlib.h>
void mult(int* n){
int i=1,d=0,z[10],r=0,j;
for(j=0;j<10;j++){z[j]=0;}
while(1){
	d = i*(*n);

	r = check(&d);
		for(j=0;j<10;j++){

			if(r!=z[j]){

			z[j+1]=r;
			}

		}



	

	i++;
	}

	for(j=0;j<10;j++){
	printf("%d\n",z[j]);
	}

}

int check(int* d){
*d = *d%10;
int c=0;
switch(*d){
case 0: return 0;break;
case 1: return 1;break;
case 2: return 2;break;
case 3: return 3;break;
case 4: return 4;break;
case 5: return 5;break;
case 6: return 6;break;
case 7: return 7;break;
case 8: return 8;break;
case 9: return 9;break;

}
}

int main(){
int t;
scanf("%d",&t);
while(t>0){
int n;
scanf("%d",&n);

mult(&n);

t--;
}
return 0;
}

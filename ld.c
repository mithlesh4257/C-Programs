#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,j,star=0,minus=0;
	FILE *fp;
	char ch;
	fp = fopen("pro.txt","r");

	for(i=0;i<5;i++)
	{

		for(j=0;j<100;j++)
		{
ch = getc(fp);
		if(ch==EOF){
		break;
		}
		if(ch=='1'){
		printf("1");
		}

		if(ch=='2'){
		printf("2");
		}
		if(ch=='3'){
		printf("3");
		}
		if(ch=='4'){
		printf("4");
		}
		if(ch=='5'){
		printf("5");
		}

		if(ch==' '){
		printf(" ");
		}
		if(ch=='\n'){
		printf(" -1\n");
		}

		if(ch=='*')
		{
			star++;
			if(minus>0){
			printf(" %d ",minus);
			minus=0;
			}
		}

		if(ch=='-'){
			minus++;
		if(star>0){
			printf(" %d ",star);
			star=0;
}
			
		}
		}
		}

	fclose(fp);
	return 0;
}


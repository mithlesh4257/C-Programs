#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main(int argc, char * argv[]){
char *str = "hello, %s world\n";
printf(str,str);

//int c;
/*while((c=getchar()) != EOF || (c=getchar()) != '\n')
 putchar(tolower(c));*/

int i;
printf("No of args. : %d",argc);
for(i=0;i<argc;i++)
 printf("%s\n",argv[i]);


/*FILE *fp,*fp2;
fp = fopen("Texts.txt","w");
fprintf(fp,"hello world !");
fclose(fp);
fp2 = fopen("Texts.txt","r");
char* c;
fscanf(fp2,"%s",c);
*/


printf("%s",c);
fclose(fp2);

while((c=getc()) != EOF)
putc(c,a);


return 0;
}

#include <stdio.h>
#include<stdlib.h>
int main(void)
{
//– Copy
FILE *fp, *a;
int c;
//File I/O
//test.txt to hello.txt
/* text.txt */
fp = fopen("test.txt", "r");
/* hello.txt */
a = fopen("hello.txt", "a");
/* read from ‘fp’ and write to ‘a’ */
/* read character from a file */
while((c = getc(fp)) != EOF)
putc(c, a);
/* close the files */
fclose(fp);
fclose(a);
return 0;
}

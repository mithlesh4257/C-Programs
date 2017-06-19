#include <stdio.h>
#include <ctype.h>
int main(void)
{
int c;
while ((c = getchar()) != EOF)
putchar(tolower(c));

char *str = "hello, %s world\n";
printf(str, str);

return 0;
}

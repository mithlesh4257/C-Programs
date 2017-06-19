#include <stdio.h>
#include <ctype.h>
int main(int t, char *v[])
{


int i;
printf("No. of args. : %d\n", t);
for (i = 0; i < t; i++)
printf("%s\n", v[i]);



return 0;
}

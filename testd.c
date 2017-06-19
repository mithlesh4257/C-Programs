#include<stdio.h>
int main(){

int a,b;
//scanf("%d %*s %d", &a, &b);
//printf("%d %d\n", a, b);

char c;
//scanf("%*[ \t\n]%c", &c);
//printf("Character is : %c\n", c);

char str[20];
//scanf("%[01]s", str);
//printf("%s\n", str);

scanf("%d%%", &a);
printf("%d\n", a);
}

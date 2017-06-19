#include<stdio.h>
#include<stdlib.h>


int main ()
{
char dd[3] , mm[3] , yyyy[5];
scanf ("%[^-/]s%*c%[^/-]s%*c%4s" , &dd , &mm , &yyyy );
printf ("%2s%2s%4s\n " , dd , mm , yyyy );
}

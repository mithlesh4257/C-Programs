#include<stdio.h>
#include<stdlib.h>
struct d{
int day;
char month[3];
int year;
};

enum month {Jan=1,Feb,Mar,Apr,May,Jun,Jul,Aug,Sep,Oct,Nom,Dec};
int compare(struct d *d1,struct d *d2){
enum month m,n;
if(d1->month == "Jan" || d2->month=="Jan"){
m = Jan;n=Jan;
}
if(d2->month == "Feb" || d2->month=="Feb"){
m = Feb;n=Feb;
}
if(d2->month == "Mar" || d2->month=="Mar"){
m = Mar;n=Mar;
}



if(m > n){

return 1;
}


}

int main(){

struct d x,y;
scanf("%d-%s-%d %d-%s-%d",&x.day,x.month,&x.year,&y.day,y.month,&y.year);
int i=0;
i = compare(&x,&y);
printf("%d\n",i);
return 0;
}

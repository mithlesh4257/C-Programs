#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct linkedlist {
char data[10];

int top;
struct linkedlist * ptr;
};

char* pop(struct linkedlist *p){

struct linkedlist * temp;
temp = p;
if(temp == NULL)
return '\0';

while(temp->ptr != NULL){

temp = temp->ptr;

}
char *s;
s= temp->data;
free(temp);

return s;

}

struct linkedlist * createNode(){
return (struct linkedlist*)malloc(sizeof(struct linkedlist));
}

void printList(struct linkedlist *p){
struct linkedlist* temp;
temp = p;
printf("\nLIST:\n");
while(temp != NULL)
{
printf("%s \n",temp->data);
temp = temp->ptr;
}
}

void string_copy(char*s1, char * s2){
char *p,*q;
p =s1;
q = s2;
while(*p++ = *q++);
}

void push (struct linkedlist * p, char * str){
struct linkedlist * temp,*new,*prev;
temp = p;
prev = NULL;
if(temp == NULL)
return;
while(temp->ptr !=  NULL){
prev = temp;
temp = temp->ptr;
}

struct linkedlist * tempp,*prev1;
tempp = p;
while(tempp->ptr !=NULL){

tempp = tempp->ptr;
}
if(find_char(tempp->data,str))
pop(p);



new = createNode();
if(str[0] =='<')
string_copy(new->data,str);
temp->ptr = new;

}

int find_char(char * s1,char * s2){
char * p,*q;
p =s1;
q=s2;
p= p+1;
q=q+2;
if(*p == *q)
return 1;
else
return 0;

}

struct linkedlist* find_last(struct linkedlist *p){
while(p!=NULL){
	p = p->ptr;
}
return p;
}

void check_balance(struct linkedlist *p){
struct linkedlist * temp,*temp1;
temp = p;
temp1 = p;
while(temp !=NULL){
temp1=p;
while(temp1 !=NULL){
	
	if(find_char(temp->data,temp1->data))
	{
	if(temp->data[0] == '<' && temp1->data[1]=='/' )
	printf("\nMatched %s \n",temp->data);
	}
	temp1 = temp1->ptr;

}
temp =temp->ptr;
}




}

int main(){
FILE *fp;
struct linkedlist * one,*two,*start,*start2;
one = createNode();
two = createNode();
start = one;
start2 = two;
int c;
fp = fopen("abc3.html","r");
char s[10];

long n,m;


fseek(fp,0L,SEEK_END);
m= ftell(fp);
rewind(fp);
n = ftell(fp);
while(m != n){
fgets(s, 10, fp);

n = ftell(fp);
push(start,s);

}





fclose(fp);

printList(one);

check_balance(one);
return 0;
}

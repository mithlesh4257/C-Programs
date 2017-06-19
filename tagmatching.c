#include<stdio.h>
#include<stdlib.h>

struct linkedlist{
char tag[10];
struct linkedlist * ptr;
};

struct linkedlist * createNode(){
return (struct linkedlist *)malloc(sizeof(struct linkedlist));
}

struct stack {
struct linkedlist * array;
array = createNode();
int top;
};

char pop(struct stack *p){
	if(p->top == -1){
		return '\0';
	}
	
	return p->c[p->top--];

}
 
void push(struct stack *p, char c){
	if(p->top == SIZE -1){
		printf("Stack Full.");
		return;
	}


		p->top++;
		p->c[p->top] = c;


}


int main(){

FILE *fp;
char str[10];
fp = fopen("file.html","r");
while(1){
if(fp == EOF){
return;
}else{

fscanf(fp,"<%[^>]s",str);
}
}


}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 100
struct stack{
char c[SIZE];
int top;
};

struct linkedlist{
char array[SIZE];
struct linkedlist * next;
};

struct linkedlist * createNode(){
return (struct linkedlist*)malloc(sizeof(struct linkedlist));
}

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
struct stack *p;
p = (struct stack *)malloc(sizeof(struct stack));
p->top = -1;
char a[100];
int i;
char b;
scanf("%s",a);
for(i=0;i<strlen(a);i++){

	if(a[i]=='{'){

		push(p,a[i]);
	}
	if(a[i]=='}'){
		b = pop(p);
		if(b=='{'){
			//p->top = p->top-1;
			printf("\nCorrect. Bracecs. ");
		}
		else {
		printf("\nIncorrect Braces.");		
		}
	}

	if(a[i]=='('){
		push(p,a[i]);
	}

	if(a[i]==')'){
		b = pop(p);
		if(b=='('){
			//p->top = p->top-1;
			printf("\nCorrect. Parenthesis. ");
		}
		else {
		printf("\nIncorrect Parenthesis.");		
		}
	}

}

return 0;
}

#include<stdio.h>
#include<stdlib.h>
struct node {
char a;
struct node * ptr;
};

void printList(struct node * start){
struct node * temp;
temp = start;
while (temp != NULL){
printf(" %c ",temp->a);
temp = temp->ptr;
}
}

void createNode(struct node * start, char a){

if(start == NULL)
 return;

struct node * temp ;
temp = start;
while(temp->ptr !=NULL){
temp = temp->ptr;
}

struct node *newNode;
newNode = (struct node*)malloc(sizeof(struct node));
newNode->a  = a;
temp->ptr = newNode;


}



void main(){
struct node * start;
struct node  l1;
l1.a = 't';
l1.ptr = NULL;
start = &l1;
char a='a';
int i=0;
while(i<26){
createNode(start,a++);
i++;
}

printList(start);

}

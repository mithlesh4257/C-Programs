#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node * ptr;
};

struct node * createNode(){
return (struct node *)malloc(sizeof(struct node));
}

void addLast(int data,struct node * p);
struct node * findLastNode(struct node*p);
void printList(struct node *p);
void tGen(struct node *t,struct node *s);
struct node * createList(struct node * s);
int main(){
struct node * startS = NULL,*startT = NULL,*temp;
temp = createNode();
temp->data = 0;
temp->ptr = NULL;
startS = temp;//for S
//similarlly for T
struct node *tempt = createNode();
tempt->data = 1;
temp->ptr = NULL;
startT = tempt;//this is starting of t

int i=0;

struct node * temps1,*tempt1;

//temps1 = last node

temps1 = findLastNode(startS);
temps1->ptr = startT;
tempt1 = createList(startS);
printList(tempt1);

return 0;
}

struct node * createList(struct node * s){
struct node * temp;
temp = s;
static struct node * list;
struct node * temp1;


while(temp != NULL){

addLast(1-temp->data,list);
temp = temp->ptr;
}

return list;
}


void addLast(int data,struct node * p){
if(p == NULL){
struct node * temp;
temp = createNode();
temp->data = data;
p = temp;
return;
}else{
struct node * temp,*temps = p;

while(temps->ptr !=NULL){
temps = temps->ptr;
}
temp = createNode();
temp->data = data;
temps->ptr = temp;
return;
}
}

struct node * findLastNode(struct node*p){
struct node *temp;
temp = p;
while(temp->ptr !=NULL){
temp = temp->ptr;
}
return temp;
}

void printList(struct node *p){
struct node * temp;
temp = p;
while(temp != NULL){
printf(" %d ",temp->data);
temp= temp->ptr;
}

}

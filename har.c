#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node * ptr;
};

struct node * createNode(int data){
struct node * temp = (struct node *)malloc(sizeof(struct node));
temp->data = data;
temp->ptr = NULL;
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

void addTwoList(struct node ** s,struct node * t);
void addAfterList(int data, struct node * t);
void createInverseLinkedList(struct node * s,struct node ** t);

int main(){
struct node * listS=NULL,*listT=NULL;
struct node * temp;
temp = createNode(0);
listS = temp;
temp  = createNode(1);
listT = temp;


addTwoList(&listS,listT);
printList(listT);
printf("\n");
createInverseLinkedList(listS,&listT);
addTwoList(&listS,listT);
createInverseLinkedList(listS,&listT);
addTwoList(&listS,listT);

printList(listS);

return 0;
}

void addTwoList(struct node ** s,struct node * t){
struct node * temp;
temp = t;
while(temp !=NULL){
addAfterList(temp->data,*s);
temp = temp->ptr;
}
}

void addAfterList(int data, struct node * t){
struct node * temp;
temp =t;
while(temp->ptr != NULL){
temp = temp->ptr;
}
struct node * new;
new  = createNode(data);
new->ptr= NULL;
temp->ptr = new;
}

void createInverseLinkedList(struct node * s,struct node ** t){
struct node * temps = s;
struct node * tempt = *t;

while(temps->ptr != NULL){

addAfterList(temps->data,*t);
temps = temps->ptr;
}


}


#include<stdio.h>
#include<stdlib.h>

struct node {
int data;
struct node * ptr;
};

struct node * createNode(){
return (struct node*)malloc(sizeof(struct node));
}

void printList(struct node * start){
struct node * temp;
temp = start;
while(temp != NULL){
printf(" %d ",temp->data);
temp = temp->ptr;
}
}

void add_y_after_c(struct node * start,int y, int c){
struct node * temp,*new,*next;
temp = start;
new =createNode();
if(temp == NULL){
temp = createNode();
temp->data = c;
new->data = y;
temp->ptr = new;
start = temp;

}

while(temp->ptr != NULL){
if(temp->data == c){
next = temp->ptr;
new->data = y;
temp->ptr = new;
new->ptr =next;
}
}
temp = temp->ptr;
}

int main(){



return 0;
}

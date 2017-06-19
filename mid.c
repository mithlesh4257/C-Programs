#include<stdio.h>
#include<math.h>
#include<stdlib.h>
struct node {
int data;
struct node * ptr;
};

struct node * createNode(){
return(struct node*)malloc(sizeof(struct node));
}
struct node * start,*rear;

void q_push(int data){
if(start == NULL){
struct node* temp;
temp = createNode();
temp->data = data;
temp->ptr = NULL;
start = temp;return;
}
struct node * temp,*new;
 temp = start;
new = createNode();
new->data = data;
new->ptr =NULL;
struct node * end;
while(temp->ptr !=NULL){
temp = temp->ptr;
}
end =temp;
end->ptr =new;
return;
}

int q_pop(){
struct node * temp;
temp = start;

int d;
d = temp->data;
start = temp->ptr;
free(temp);
return d;

}

void q_print(){
struct node *temp;
temp = start;
while(temp!= NULL){
printf(" %d ",temp->data);
temp = temp->ptr;
}

}

int main(){
int m;
scanf("%d",&m);
int i=0,j;
while(i<m){
j = rand()%100;
q_push(j);
i++;
}
q_print();

int ed;
i=0;
while(i<m-1){
ed = q_pop();
i++;
}
printf("\n");
q_print();

return 0;
}

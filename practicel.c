#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct linkedlist {
int data;
struct linkedlist * ptr;
};

struct linkedlist* createNode(){
return (struct linkedlist*)malloc(sizeof(struct linkedlist));
}
 
void printList(struct linkedlist *start)
{
struct linkedlist *temp;
temp = start;
while(temp != NULL)
{
printf(" %d ", temp->data);
temp = temp->ptr;
}
}

bool search(struct linkedlist * p,int c){
struct linkedlist * temp;
temp = p;
while(temp !=NULL){
if(temp->data == c){
return true;
break;
}
else{
return false;
}
}

}

void find_union(struct linkedlist * p,struct linkedlist *q){
struct linkedlist * final,*temp1,*temp2;

final = createNode();

printf("\nUnion list\n");

temp1 =p;
temp2 = q;

while(temp1 != NULL){
while(temp2 !=NULL){

if(temp1->data == temp2->data){
printf(" %d ",temp1->data);
temp2->data = -1;

}
temp2 = temp2->ptr;

}
temp2 = q;
temp1 = temp1->ptr;
}



}

void add_y_after_c(struct linkedlist* p,int y,int c){
struct linkedlist * temp, *newnode,*prev;
newnode = createNode();
newnode->data = y;
temp = p;
if(temp == NULL) return;
while(temp != NULL){
if(temp->data == c){
prev = temp->ptr;
temp->ptr = newnode;
newnode->ptr = prev;
break;
}
temp = temp->ptr;
}
}


int main(){

struct linkedlist * list1;
struct linkedlist * list2;
 list1 = createNode();
 list2 = createNode();


FILE *fp1,*fp2;
int c,d;

fp1 = fopen("abc.txt", "r");

//adding in reversing order
while((c=getc(fp1)) != EOF){
fscanf(fp1, "%d %d", &c,&d);
add_y_after_c(list1,c,0);
add_y_after_c(list2,d,0);
}


fclose(fp1);



printf("List1\n");
printList(list1);

printf("\n");
printf("List2\n");
printList(list2);



find_union(list1,list2);

return 0;
}

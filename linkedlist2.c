#include<stdio.h>
#include<stdlib.h>
struct node {
char data;
struct node * ptr;
};
struct node *createNode(){
return (struct node *)malloc(sizeof(struct node));
}
void print(struct node *start)
{
struct node *temp;
temp = start;
while(temp != NULL)
{
printf("%c", temp->data);
temp = temp->ptr;
}
}
void delete(struct node **str) {
struct node *temp, *prev;
temp = *str, prev = NULL;
if(temp == NULL) return; 
while(temp->ptr != NULL) {
prev = temp; temp = temp->ptr;
}
free(temp); 
if(prev != NULL) prev->ptr = NULL;
else *str = NULL;
}

int search(struct node *str, char element){
struct node *temp;
temp = str;
while(temp != NULL){
if(temp->data == element) break;
else temp = temp->ptr;
}
if(temp == NULL)
return 0;
else
return 1;
}

struct node * searchNodeAdd(struct node *str, char element){
struct node *temp;
temp = str;
while(temp != NULL){
if(temp->data == element) break;
else temp = temp->ptr;
}
if(temp == NULL)
return NULL;
else
return temp;
}

void add_y_after_c(struct node *str,char y,char c){
struct node *temp,*new,*getc,*alpha;
temp = str;
getc = searchNodeAdd(temp,c);
alpha = getc->ptr;
if(temp == NULL){
printf("No node present initially.");
}
else {
if(search(temp,c)){
new = createNode();
new->data = y;
getc->ptr = new;
new->ptr = alpha;
printf("\nInsertion y after c.");
}
}
}
int main(){
char l,a;
a='a';
struct node *start,*temp;
temp  = createNode();
temp->data = a;
temp->ptr = NULL;
start = temp;



temp = createNode();
temp->data = 'b';
temp->ptr = NULL;
start->ptr = temp;



print(start);
add_y_after_c(start,'c','b');
printf("\n");
print(start);
add_y_after_c(start,'d','c');
printf("\n");
print(start);
add_y_after_c(start,'e','d');
printf("\n");
print(start);
add_y_after_c(start,'f','e');
printf("\n");
print(start);
add_y_after_c(start,'g','f');
printf("\n");
print(start);
add_y_after_c(start,'h','g');
printf("\n");
print(start);


delete(&start);
printf("\nDeletion\n");
print(start);
delete(&start);
printf("\nDeletion\n");
print(start);
delete(&start);
printf("\nDeletion\n");
delete(&start);
print(start);
printf("\nDeletion\n");
delete(&start);
print(start);
printf("\nDeletion\n");
delete(&start);
print(start);
printf("\nDeletion\n");
delete(&start);
print(start);
printf("\nDeletion\n");
delete(&start);
print(start);
printf("\nDeletion\n");

print(start);
return 0;
}

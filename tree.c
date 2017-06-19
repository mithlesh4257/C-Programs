#include<stdio.h>
#include<stdlib.h>
struct node{
char a;
struct node *left,*right;


};
struct node* createNode(char data){
struct node * temp;
temp = (struct node*)malloc(sizeof(struct node));
temp->a = data;
temp->left=NULL;
temp->right=NULL;

return temp;
}

void struct_add(struct node * start,char c){
if(start == NULL){
struct node * temp = createNode(c);
start = temp;
}
struct node * temp;
temp = start;
while(temp != NULL)
temp = temp->ptr;
}


void pre_order_traversal(struct node* root) {
   if(root != NULL) {
      printf("%d ",root->a);
      pre_order_traversal(root->left);
      pre_order_traversal(root->right);
   }
}

void inorder_traversal(struct node* root) {
   if(root != NULL) {
      inorder_traversal(root->left);
      printf("%d ",root->a);          
      inorder_traversal(root->right);
   }
}

void post_order_traversal(struct node* root) {
   if(root != NULL) {
      post_order_traversal(root->left);
      post_order_traversal(root->right);
      printf("%d ", root->a);
   }
}

void main(){
struct node *start,*t1,*t2,*t3,*t4;
t1= createNode('a');
t2= createNode('b');
t3= createNode('c');
t3= createNode('d');


t1->left = t2;
t1->right = t3;
t2->left = t4;
start = t1;


pre_order_traversal(start);

}

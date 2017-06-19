#include<stdio.h>
#include<stdlib.h>
struct node {
int data;
struct node *ptr;
};

void delete(struct node **str,char y) 
	{
	struct node *temp, *prev;
	temp = *str, prev = NULL;
	if(temp == NULL){
 return; }
	while(temp != NULL) { 
	if(temp->data==y){
	break;
	}
	prev = temp; 
	temp = temp->ptr;
	}
	prev->ptr=temp->ptr;
	free(temp); 
	
	}
void deleteStart(struct node **str)
{
if(*str == NULL) { /* empty link list */

free(str);

}
else
{

	struct node *temp;	

	temp = *str;
	*str = (*str)->ptr;
	free(temp);
}

}
struct node *createnode()
	{
	return (struct node *)malloc(sizeof(struct node));
	}

void print(struct node *start)
{
	struct node *temp;
	temp = start;
	if(temp == NULL) printf("Null");
	while(temp != NULL)
	{
		printf("%c", temp->data);
		temp = temp->ptr;

	}
	printf("\n");
}

void add_y_after_c(struct node *start,char y,char c)
{
	struct node *temp;
	struct node *insertnode;
	temp=start;
	while(temp!=NULL)
	{
		if(temp->data==c)
		{
			insertnode=createnode();
			insertnode->data=y;
			temp->ptr=insertnode;
			break;
		}
		temp=temp->ptr;
	}
}


int main()
{
struct node *start;
start=createnode();
start->data='a';
print(start);
int i;
i=97;
while(i<122)
{
	add_y_after_c(start, (char)i+1, (char)i);
	print(start);
	i=i+1;
}
add_y_after_c(start, 'A', 'z');
print(start);
i=65;
while(i<90)
{
	add_y_after_c(start, (char)i+1, (char)i);
	print(start);
	i=i+1;
}
i=122;
while(i>97)
{
	delete(&start,(char)i);
	print(start);
	i=i-1;
}
deleteStart(&start);
i=90;
while(i>65)
{
	delete(&start,(char)i);
	print(start);
	i=i-1;

}
deleteStart(&start);
	print(start);

return 0;
}

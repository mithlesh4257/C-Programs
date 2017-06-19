#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node {
int data1,data2,data3,data4;
struct node * ptr;
};

enum note{
START,END
};


struct node * createNode(){
return (struct node*)malloc(sizeof(struct node));
}

struct node * start;

void Insert(int data1,int data2,int data3,int data4,enum note i){
	if(i == END){
	//end
		if(start == NULL)
		{
			struct node *temp1;
			temp1 = createNode();
			temp1->data1 = data1;
			temp1->data2 = data2;
			temp1->data3 = data3;
			temp1->data4 = data4;
			temp1->ptr = NULL;
			start = temp1;
				return;
		}
else {

	struct node* temp,*new;

	new = createNode();
	temp = start;
	while(temp->ptr !=NULL)
	{
		temp = temp->ptr;
	}
		new->data1 = data1;
		new->data2 = data2;
		new->data3 = data3;
		new->data4 = data4;
		new->ptr = NULL;
		temp->ptr = new;

	}
}


	if(i==START){
	//start

		if(start == NULL)
		{
			struct node* temp1;
			temp1 = createNode();
			temp1->data1 = data1;
			temp1->data2 = data2;
			temp1->data3 = data3;
			temp1->data4 = data4;
			temp1->ptr = NULL;
			start = temp1;
			return;
		}
	else {
		struct node * temp,*new;
		new = createNode();
		temp = start;
	
	
		new->data1 = data1;
		new->data2 = data2;
		new->data3 = data3;
		new->data4 = data4;
		new->ptr = temp->ptr;
	
		start = new;
	}


}
}

void printList(){
struct node * temp;
temp = start;
int count;
while(temp !=NULL){
//count = compute_distinct(temp->data1,temp->data2,temp->data3,temp->data4);
printf("\n %d.%d.%d.%d ",temp->data1,temp->data2,temp->data3,temp->data4);
temp = temp->ptr;
}

}

int  compute_distinct(int data1,int data2,int data3,int data4){
struct node * temp1;
int counter=0;
temp1 =start;


while(temp1->ptr != NULL){

if(temp1->data1 == data1 && temp1->data2 == data2  && temp1->data3 == data3  && temp1->data4 == data4){
counter++;
}



}
return counter;
}


bool search(struct node * str,int data1,int data2,int data3,int data4){

	struct node * temp;
	temp = str;//start
	while(temp->ptr != NULL){
		if(temp->data1 == data1 && temp->data2 == data2 && temp->data3 == data3 && temp->data4 == data4){
			return true;
		}
		else {
			return false;
		}
	temp = temp->ptr; //yha  p mistake h sudhar lena;	
	}

}


int main(int argc,char * argv[]){



FILE *fp;
fp = fopen(argv[1],"r");
int a,b,c,d,e;
while((e=fgetc(fp))!=EOF){
	fscanf(fp,"%d.%d.%d.%d",&a,&b,&c,&d);//reading ip addresses as 4 integers
	if(d%2==0){
		Insert(a,b,c,d,START);
	}
	if(d%2 != 0){
		Insert(a,b,c,d,END);
	}
}
bool aa;
if(start != NULL){
aa= search(start,89,393,33,2);
printf("%d ",aa);
}
printList();
return 0;

}

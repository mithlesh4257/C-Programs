#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
char myArray[SIZE];
int front =0;
int rear = 0;
int population(){
return (rear == front)?0:rear-front;
}
int isFull(){
return population() == SIZE;
}
int isEmpty(){
return population() == 0;
}
void join_queue(char c){
if(!isFull())
myArray[++rear%SIZE] =c;
}
char leave_queue(){
if(!isEmpty())
return myArray[++front%SIZE];
else return '$';
}
void testRun(){
int i;
for(i=0;i<10;i++)
join_queue('a'+i);
for(i=0;i<10;i++)
printf("%c",leave_queue());
}
int main(){
testRun();
printf("\n");
testRun();
printf("\nfront : %d\n",front);
printf("rear : %d\n",rear);
}

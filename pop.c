#include<stdio.h>
char array[10];
int top=-1;
char pop(){
if(top==-1)
return '\0';
char d;
d=array[top];

return d;
}

void push(char c){
if(top == 9)
return;
char d;
d=pop();
if(c=='}'){
if(d=='{'){
top = top -1;
printf("correct");
return;
}
}

if(c==')'){
if(d=='('){
top = top -1;
printf("correct");
return;
}
}

array[top++] = c;

}
int main(){
char c[100];
scanf("%s",c);
int i;
for(i=0;i<10;i++){
if(c[i] == '{' || c[i] == '('||c[i] == ')'||c[i] == '}'){
push(c[i]);
}
}
return 0;
}

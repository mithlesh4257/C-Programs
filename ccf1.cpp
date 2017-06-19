#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int getOutput(char str[]);
int arrayCh(char str[]){
int counter=0;
for(int i=0;i<strlen(str);i++){

if(str[i] == '.'){
counter=counter+ 1;
}
}
return strlen(str)-counter;
}

int getOutput(char str[]){
int s= strlen(str);
int c=0;
int size = arrayCh(str);
cout<<size<<endl;
char stack[arrayCh(str)];

	for(int i=0;i<s;i++){
	if(str[i] == 'H'){
	stack[c++] = str[i];
	}
	if(str[i] =='T'){
	stack[c++] = str[i];
	}
	}

if(stack[0] == 'T'){
return 0;
}

int count =0,o = strlen(stack);
for(int j=0;j<o;j++){
if(stack[j] == 'H' && stack[j+1] == 'H'){
break;
return 0;
}
if(stack[j] == 'T' && stack[j+1] == 'T'){
break;
return 0;
}
}

if(o%2 == 0){
return 1;
}

return 0;
}


int main(){

int R;
cin>>R;
if(R>=1 && R<=500){
 int Re[R];
 for(int i=0;i<R;i++){
 int L[R];
 cin>>L[i];
 if(L[i]>=1 && L[i]<=500){
 char lr[L[i]];
 for(int p=0;p<L[i];p++){
 cin>>lr[p];
 }
Re[i] = getOutput(lr);
}
else{
cout<<"Length Should Not exceed 500"<<endl;
}
}
for(int t=0;t<R;t++){
if(Re[t] == 1){

cout<<"Valid"<<endl;
}
else if(Re[t] == 0){cout<<"Invalid"<<endl;
}
}
}
else{
cout<<"Report Should Not exceed 500"<<endl;
}

return 0;
}

#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
int getResults(char Reports[]);
int getStringLength(char Reports[]);
int getStringLength(char Reports[]){
int counter=0;
int Length = strlen(Reports);
for(int i=0;i<Length;i++){
if(Reports[i] =='H' || Reports[i] =='T'){
counter +=1;
}
}

return counter;
}
int getResults(char Reports[]){
int var  = getStringLength(Reports);

char *Stack;
Stack = new char(var);

int c=0;
for(int i=0;i<strlen(Reports);i++){
if(Reports[i] == 'H'){
Stack[c] = Reports[i];
c +=1;
}
else if(Reports[i] == 'T'){
Stack[c] = Reports[i];
c +=1;
}
}

if(Stack[0] == 'T'){
return 0;
}
if(strlen(Stack)%2 == 0){
for(int k=0;k<strlen(Stack);k++){
if((Stack[k] == 'H' && Stack[k+1] == 'H')||(Stack[k]=='T' && Stack[k+1]=='T')){
return 0;
}
}
return 1;
}
else{

return 0;
}


}



int main(){
int R;
cin>>R;

if(R>=1 && R<=500){
int* Results;
Results = new int(R);
for(int r=0;r<R;r++){
int L;
cin>>L;
if(L>=1 && L<=500){

char *Reports;
Reports =new char(L);
cin>>Reports;

Results[r] = getResults(Reports);

}
}
for(int i=0;i<R;i++){
if(Results[i]==1){
cout<<"Valid"<<endl;
}else{
cout<<"Invalid"<<endl;
}
}
}
return 0;
}

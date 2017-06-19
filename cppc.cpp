#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int getOutput(string lr);
int check_string_seq(string stack);
 
    int check_string_seq(string stack){
    int i,count=0,ld=stack.size();
    for(i=0;i<ld;i++){
    if(stack[i] == 'H' && stack[i+1] == 'T'){
    count++;
    }

    }
    if(count*2 ==ld){
    return 1;
    }
    else {
    return 0;
    }
     
    }
int co(string str);
    int co(string str){
    int c=0;
    int k=str.size();
    for(int i=0;i<k;i++){
    if(str[i] == '.'){
    c = c+1;
    }
    }
    return k-c;
    }
int getOutput(string lr){
 int s = lr.size();
int signal=0;
for(int i =0;i<s;i++){
if(lr[i] == 'H'){
signal = 1;
break;
}
}
int c=0;
string stack;
if(signal ==1){
for(int i=0;i<s;i++){
if(lr[i] == 'H'){
if(c>0){
if(stack[c-1] == 'T'){
stack[c++] == 'H';
}
}
else if(c==0){
stack[c++] = 'H';
}
}
if(lr[i] == 'T'){
if(c>0){
if(stack[c-1] =='H'){
stack[c++] = 'T';
}
}
}
}
}
if(stack.size() == co(lr)){
if(stack.size()%2 == 0){
if(check_string_seq(stack)){
return 1;
}
else{
return 0;
}
}
else{
return 0;
}
}
else{
return 0;
}

}
int main(){

int R;
cin>>R;
if(R>=1 && R<=500){
int Re[R];
for(int i=0;i<R;i++){
int L;
cin>>L;
if(L>=1 && L<=500){
string lr;
cin>>lr;
Re[i] = getOutput(lr);
}
else{
cout<<"Length Should Not exceed 500"<<endl;
}
}
for(int t=0;t<r;t++){
Re[t] == 1?cout<<"Valid"<<endl:cout<<"Invalid"<<endl;

}
}
else{
cout<<"Report Should Not exceed 500"<<endl;
}

return 0;
}
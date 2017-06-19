#include<iostream>
#include<cstring>
using namespace std;

int out_res(int h[],int k){
if(h[0] ==1 && h[k-1] == 1) {
if(k%2 != 0){
int mid = (k-1)/2;
for(int i=0,j=k-1;i<mid,j>mid;i++,j--){
if(h[i] == h[j]){
if(h[i+1]-h[i] == 1 && (h[mid]-h[mid-1] == 1)){
if(h[mid] > h[i] && h[mid] > h[j]){
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
}
}
else {
return 0;
}

}
else{
return 0;
}
}
int main(){
int S;
cin>>S;
if(S>=1 && S<=100){
int result[S];
for(int i=0;i<S;i++){

int n;
cin>>n;
int h[n];
for(int j=0;j<n;j++){
cin>>h[j];
}
result[i] = out_res(h,n);
}

for(int k=0;k<S;k++)
result[k] == 1?cout<<"yes"<<endl:cout<<"no"<<endl;
}
return 0;
}

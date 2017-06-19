#include<iostream>
#include<cmath>
using namespace std;
int getResults(int s1[],int s2[]);
double max(double d1,double d2,double d3,double d4);
double max(double d1,double d2,double d3,double d4){
double k1 = ((d1>d2)?d1:d2),
 k2 = ((d3>d4)?d3:d4);
return k1>k2?k1:k2;
}
int getResults(int s1[],int s2[]){

int m1x,m2x,m1y,m2y;
m1y = (s1[3]-s1[1]);
m1x = (s1[2]-s1[0]);
m2y = (s2[3]-s2[1]);
m2x = (s2[2]-s2[0]);
if(((m1x == 0 && m2x == 0) && !((m1x == 0 || m2x == 0)))||(m1y == m2y || m2y == -m1y)?1:0){
// straight line
double dist1 = sqrt((s1[3]-s1[1])*(s1[3]-s1[1]) + (s1[2]-s1[0])*(s1[2]-s1[0])),
dist2 = sqrt((s2[3]-s2[1])*(s2[3]-s2[1]) + (s2[2]-s2[0])*(s2[2]-s2[0])),
dist3 =sqrt((s1[0]-s2[0])*(s1[0]-s2[0]) + (s1[1]-s2[1])*(s1[1]-s2[1])),
dist4 =sqrt((s1[2]-s2[2])*(s1[2]-s2[2]) + (s1[3]-s2[3])*(s1[3]-s2[3])),
dist5 =sqrt((s1[2]-s2[0])*(s1[2]-s2[0]) + (s1[3]-s2[1])*(s1[3]-s2[1])), 
dist6 =sqrt((s1[0]-s2[2])*(s1[0]-s2[2]) + (s1[1]-s2[3])*(s1[1]-s2[3]));
double dist7 = max(dist3,dist4,dist5,dist6); 

if(dist7 < dist1+dist2){

return 1;
}
else{

return 0;
}

}
if((m1x == 0 || m2x == 0) && !((m1x == 0 && m2x == 0))){
if(((s1[0] == s2[0]) && (s1[1]==s2[1]))||(( s1[0] == s2[2] )&&( s1[1]==s2[3] ))||(((s1[2] == s2[0]) && (s1[3]==s2[1]))||(( s1[2] == s2[2] )&&( s1[3]==s2[3] )))){
return 1;
}
else{
return 0;
}
}

}
	
int main(){
int T;
cin>>T;
int I[T];
if(T>=1 && T<=100000){
for(int t=0;t<T;t++){
int s1[4],s2[4];
for(int i=0;i<4;i++)
cin>>s1[i];
for(int i=0;i<4;i++)
cin>>s2[i];
I[t] = getResults(s1,s2);

}
for(int i=0;i<T;i++){
(I[i]==1)?cout<<"yes"<<endl:cout<<"no"<<endl;
}
}



return 0;
}

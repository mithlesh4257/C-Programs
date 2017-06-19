#include<iostream>
#include<ctime>
using namespace std;

class Line {
public:
 double length;
 void setLength(double len);
 double getLength(void);

};

void Line::setLength(double len){
 length = len;
}
double Line::getLength(void){
 return length;
}

int main(){
Line line;
line.setLength(6.0);
cout<<"Length : "<<line.getLength()<<endl;
return 0;
}
/*
double vals[] = {10.1,12.6,33.1,24.1,50.0};
double& setValues(int i){
 return vals[i];
}
int main(){
//cout<<"Value before change"<<endl;
for(int i=0;i<5;i++){
//cout<<vals[i]<<end;
}
cout<<&vals[2]<<endl;
cout<<&setValues(2);

return 0;
}*/

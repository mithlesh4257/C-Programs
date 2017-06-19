#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstring>
using namespace std;

void swap(int &x, int &y){
int temp;
temp = x;
x = y;
y = temp;
}

int main(){
enum color {red, green=6, blue} c;
c = blue;
//int x = 6, r=4;
//swap(x,r);
//cout<<x<<" "<<r<<endl;

srand((unsigned)time(NULL));
int j = rand();
int i=5;
	int& r = i;
cout<<&r<<endl;
cout<<&i<<endl;
return 0;

}

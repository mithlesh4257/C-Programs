#include<stdio.h>

int act(int i){
if(i>0)
return i%10+act(i/10);
else
return 0;
}

int main(){
printf("%d",act(1234));

}

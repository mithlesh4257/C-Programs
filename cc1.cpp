    #include<iostream>
    #include<cstdlib>
    #include<cstring>
     using namespace std;
    int check_string_seq(char stack[]);
    int co(char str[]);
    int check_reports(char str[]);

    int co(char str[]){
    int c=0;
    int k=strlen(str);
    for(int i=0;i<k;i++){
    if(str[i] == '.'){
    c = c+1;
    }
    }
    return k-c;
    }
int check_reports(char str[]){
    int i,k,l,len=strlen(str);
    int count=0,signal=0,sig=0;
         
    for(int j=0;j<len;j++){
    if(str[j] == 'H'){
    signal = 1;
    break;
    }
    }
     
     
    int c=0;
     
    char stack[len];

    if(signal ==1){
    	for(i=0;i<len;i++){
    		if(str[i] == 'H'){
    			if(c>0){
    			if(stack[c-1] == 'T'){
    			stack[c++] = 'H';
    			count++;
    			}
    			}
    			else if(c==0){
    			stack[c++] = 'H';
    			count++;
    			}
    		}
    		if(str[i] == 'T'){
    			if(c>0){
    			if(stack[c-1] == 'H'){
    			stack[c++] = 'T';
    			count++;
     
    			}
    			}
    			
    		}
    	}
     
    }
     
    if(strlen(stack) == co(str)){
    if(strlen(stack)%2 == 0){
    if(check_string_seq(stack)){
    return 1;
    }
    else{
	return 0;
	}
    }
    else {
    return 0;
    }
    }
    else {
    return 0;
    }
     
     
     
    }
     
    int check_string_seq(char stack[]){
    int i,count=0,ld=strlen(stack);
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
     
    int main(){
    int r;

	
cin>>r;
int re[r];
int ll;

    if(r>=1 && r<=500){
    for(ll=0;ll<r;ll++){
    int l;


    cin>>l;
    if(l>=1 && l<=500){
    char str[l];

    for(int kd=0;kd<l;kd++){
	cin>>str[kd];
	}
    re[ll] = check_reports(str);

    }
    
    }



    }

for(int t=0;t<r;t++){
re[t] == 1?cout<<"Valid"<<endl:cout<<"Invalid"<<endl;

}
    
    return 0;
    } 

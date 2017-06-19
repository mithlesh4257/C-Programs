        #include<stdio.h>
        #include<stdlib.h>
        #include<string.h>
         
        int check_string_seq(char stack[]);
        int co(char str[]);
    int check_reports(char str[]);
        int co(char str[]){
        int c=0,i;
        int k=strlen(str);
        for(i=0;i<k;i++){
        if(str[i] == '.'){
        c = c+1;
        }
        }
        return k-c;
        }
    int check_reports(char str[]){
        int i,j,k,l,len=strlen(str);
        int count=0,signal=0,sig=0;
         
         
        for(j=0;j<strlen(str);j++){
        if(str[j] == 'H'){
        signal = 1;
        break;
        }
        }
         
         
        int c=0;
         
        char *stack;
        stack = (char*)malloc(sizeof(char)*len);
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
        int i,count=0;
        for(i=0;i<strlen(stack);i++){
        if(stack[i] == 'H' && stack[i+1] == 'T'){
        count++;
        }
        }
        if(count*2 == strlen(stack)){
        return 1;
        }
        else {
        return 0;
        }
         
        }
         
        int main(){
        int r;
     
        // no of reports
        scanf("%d",&r);
    int *re;
    int ll;
    re = (int *)malloc(sizeof(int)*r);
        if(r>=1 && r<=500){
        for(ll=0;ll<r;ll++){
        int l;
        //length of each report
        scanf("%d",&l);
        if(l>=1 && l<=500){
        char str[l];
        scanf("%s",str);
        re[ll] = check_reports(str);
     
        }
        
        }
     
     
     
        }
    int t;
    for(t=0;t<r;t++){
    if(re[t] == 1){
    printf("Valid");
    }
    if(re[t] == 0){
    printf("Invalid");
    }
     
    }
        
        return 0;
        }  

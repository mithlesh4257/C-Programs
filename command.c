#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
int i;
printf("No fo args: %d",argc);
for(i=0;i<argc;i++){
printf("%s\n",argv[i]);

}

return 0;
}

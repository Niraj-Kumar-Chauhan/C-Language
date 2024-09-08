#include<stdio.h>

void roolNo(int rool[],int n);

int main(){
    int rool[]={1 , 2 , 3 , 4 , 5 , 6 , 7};
    roolNo(rool,8);
    return 0;
}
void roolNo(int rool[],int n){
    for(int i=0; i<8; i++){
        printf("rool no =%d\t",rool[i]);
    }
}
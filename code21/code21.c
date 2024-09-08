#include<stdio.h>

int printAddress(int n);

int main(){
    int n=6;
    printf("address of a is : %d\n",&n);
    printAddress(n);
    return 0;
}
int printAddress(int n){
    printf("address : %d",&n);
}
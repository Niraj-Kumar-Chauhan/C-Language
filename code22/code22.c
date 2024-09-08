#include<stdio.h>

void printAddress(int *n);

int main(){
    int n=65;
    printAddress(&n);
    printf("address of n is : %u\n",&n);
    return 0;
}
void printAddress(int *n){
    printf("address is : %u\n",n);
}
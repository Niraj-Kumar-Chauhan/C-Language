#include<stdio.h>

int squre(int n);
int main(){
    int number=4;
    squre(number);
    printf("number=%d\n",number);
    return 0;
}
//call by value
int squre(int n){
    n=n*n;
    printf("squre=%d\n",n);
}
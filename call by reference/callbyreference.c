#include<stdio.h>
int squre(int *n);
int main(){
    int number=5;
    squre(&number);
    printf("number=%d\n",number);
    return 0;
}
int squre(int *n){
    *n=(*n)*(*n);
    printf("squre=%d\n",*n);
}
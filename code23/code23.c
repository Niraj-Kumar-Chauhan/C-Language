#include<stdio.h>

int dowork(int a , int b , int *sum , int *mul , int *ave);

int main(){
    int a=7 , b=49 , sum , mul , ave;
    dowork(a , b , &sum , &mul , &ave);
    printf("sum=%d  mul=%d  ave=%d",sum,mul,ave);
    return 0;
}
int dowork(int a , int b , int *sum , int *mul , int *ave){
    *sum=a+b;
    *mul=a*b;
    *ave=(a+b)/2;
}
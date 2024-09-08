#include<stdio.h>

int swap(int *a , int *b);

int main(){
    int x=7,y=25;
    swap(&x , &y);
    printf("x=%d y=%d\n ",x,y);
    return 0;
}
int swap(int *a , int *b){
    int t=*a;
    *a=*b;
    *b=t;
}
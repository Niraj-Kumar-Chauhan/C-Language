#include<stdio.h>
int main(){
    int x; 
    int *ptr;
    ptr=&x;
    *ptr=0;// x=0
    printf("x=%d\n",x);//print x=0
    printf("*ptr=%d\n",*ptr);//print *ptr=0

    *ptr +=5;// x=5
    printf("x=%d\n",x);// print x=5
    printf("*ptr=%d\n",*ptr);// print *ptr=5

    (*ptr)++;// *ptr=*ptr+1, x=6
    printf("x=%d\n",x);//print x=6
    printf("*ptr=%d\n",*ptr);// print *ptr=6
    return 0;

}
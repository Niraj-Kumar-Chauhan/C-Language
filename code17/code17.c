#include<stdio.h>
int main(){
    int age=21;
    int *ptr=&age;
    //address
    printf("%u\n",&age);
    printf("%p\n",&age);
    printf("%u\n",ptr);
    printf("%u",&ptr);
    return 0;
}
#include<stdio.h>
int main(){
    int age=21;
    int *ptr=&age;
    int _age=*ptr;
    printf("%d\n",*ptr);
    printf("%d",&age);
   

}
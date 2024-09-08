#include<stdio.h>

int sum(int a ,int b);

int main(){
    int a,b;
    printf("enter first number\n");
    scanf("%d",&a);
    printf("enter second number\n");
    scanf("%d",&b);
    int s= sum( a , b);
    printf("%d",s);
    return 0;
}
int sum(int x , int y){
    return x+y;
   
}
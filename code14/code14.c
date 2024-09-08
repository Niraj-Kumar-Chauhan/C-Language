#include<stdio.h>

int sum (int num);

int main(){
    int num;
    printf("enter a number\n ");
    scanf("%d",&num);
    printf("sum of digit of an number is : %d",sum(num));
    return 0;
}
int sum(int num){
    int r,sum=0;
    while(num>=1){
      r=num%10;
      sum=sum+r;
      num=num/10;
     
    }

     return sum;
}
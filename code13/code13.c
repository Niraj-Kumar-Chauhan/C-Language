#include<stdio.h>
int main(){
    int n;
    printf("enter a number\n");
    scanf("%d",&n);
    int r,sum=0;
    while(n>=1){
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    printf("sum of digit of nummbers is : %d",sum);
    return 0;
}

#include<stdio.h>

void fiboncci();

int main(){
    fiboncci();
    return 0;
}
void fiboncci(){
     int a=0,b=1;
     for(int i=1;i<=6;i++){
        printf("  %d",a);
        int c=a+b;
        a=b;
        b=c;
        
     }
}
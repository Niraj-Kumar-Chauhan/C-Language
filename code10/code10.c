#include<stdio.h>

int FindPercentage(int science , int math , int sanskrit);

int main(){
    int science=78;
    int math=88;
    int sanskrit=90;
    printf("peercentage is : %d",FindPercentage(science , math , sanskrit));
    return 0;
}
int FindPercentage(int science , int math , int sanskrit){
    return ((science + math + sanskrit)/3);
}
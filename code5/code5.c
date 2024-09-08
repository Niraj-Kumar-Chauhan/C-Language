#include<stdio.h>

void actualprice(float value);

int main(){
    int value;
    printf("enter a value\n");
    scanf("%d",&value);

    actualprice(value);
    printf("actual price is : %d\n",value);

    return 0;


}
void actualprice(float value){
    value=value+(0.18*value);
    printf("final price is : %f\n",value);
}
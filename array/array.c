#include<stdio.h>
int main(){
    int price[3];
    printf("petrol=");
    scanf("%d",&price[0]);

    printf("rice=");
    scanf("%d",&price[1]);

    printf("potato=");
    scanf("%d",&price[2]);

    for(int j=0; j<=2; j++){
        for(int i=j; i<=j;i++){
            float gst = (price[i]*20)/100;
            printf("petrol=%f, rice=%f,potato=%f",price[0],price[1],price[2]);
        }
    }
    return 0;
}
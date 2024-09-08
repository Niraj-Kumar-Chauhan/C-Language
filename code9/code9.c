#include<stdio.h>

float celsius(float n);

int main(){
    float far=celsius(32);
    printf("farenheit is : %f",far);
    return 0;
}
float celsius(float n){
      float far=n*(9.0/5.0)+32;
      return far;
}

#include<stdio.h>

float Asquare(float side);
float Acircle(float radius);
float Arectangle(float a , float b);

int main(){
    float a=5.0;
    float b=8.0;

    printf("area of rectangle is : %f\n",Arectangle(a , b));
    return 0;
}
float Asquare(float side){
    return side*side;
}
float Acircle(float radius){
    return 3.14*radius*radius;
}
float Arectangle(float a , float b){
    return a*b;
}
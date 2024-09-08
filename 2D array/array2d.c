#include<stdio.h>
int main(){
    int marks[2][3];
    marks[0][0]=64;
    marks[0][1]=67;
    marks[0][2]=97;

    marks[1][0]=67;
    marks[1][1]=45;
    marks[1][2]=89;

    printf("marks of niraj of : %d", marks[1][2]);
    return 0;
}
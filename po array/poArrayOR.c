#include<stdio.h>
int main(){
    int aadhar[6];
    int *ptr=&aadhar[0];
    //input
    for(int i=0; i<6; i++){
        printf("%d index=",i);
        scanf("%d",(ptr+i));
    }
    //output
    for(int i=0; i<6; i++){
        printf("%d index=%d\n",i,*(ptr+i));
    }
    return 0;
}
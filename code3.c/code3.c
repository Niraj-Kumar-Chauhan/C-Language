#include<stdio.h>

void table(int n);
int main(){
    int n;
    printf("enter a number\n");
    scanf("%d", &n);

    table(n); //argument/actual parameter
    return 0;
}
void table(int n){ //parameter/formal parameter
    for(int i=1;i<=10;i++){
        int t=i*n;
        printf("%d\n",t);
    }
}
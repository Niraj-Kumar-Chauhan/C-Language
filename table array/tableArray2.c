#include<stdio.h>

void printTable(int arr[][10],int n,int number);

int main(){
    int table[2][10];
    printTable(table,0,5);
    printTable(table,1,8);
    return 0;
}
void printTable(int arr[][10],int n,int number){
    for(int i=0;i<10;i++){
        arr[n][i]=number*(i+1);

        printf("%d\t",arr[n][i]);
    }
    printf("\n");
    
       
}
#include<stdio.h>

void printTable(int arr[][10],int n,int number);

int main(){
    int table[2][10];
    printTable(table,0,5);
    printTable(table,1,8);


    for(int i=0;i<10;i++){
        printf("%d\t",table[0][i]);
    }
    printf("\n");

    for(int i=0;i<10;i++){
        printf("%d\t",table[1][i]);
    }

    return 0;
}
void printTable(int arr[][10],int n,int number){
    for(int i=0;i<10;i++){
        arr[n][i]=number*(i+1);
        
    }
    
       
}
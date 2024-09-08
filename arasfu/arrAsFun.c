#include<stdio.h>

void rool(int arr[],int n);

int main(){
    int arr[]={1 , 2 , 3 , 4 , 5};
    
    rool(arr,6);
    return 0;

}
void rool(int *arr,int n){
     for(int i=0; i<6; i++){
        printf("rool no.=%d\t",arr[i]);
     }
}
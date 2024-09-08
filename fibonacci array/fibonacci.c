#include<stdio.h>
int main(){
    int n;
    printf("enter n terms :");
    scanf("%d",&n);
    int arr[n];
    arr[0]=0;
    arr[1]=1;
    for(int i=0;i<n;i++){ 
        printf("%d\t",arr[i]);
        
    }
    return 0;
}
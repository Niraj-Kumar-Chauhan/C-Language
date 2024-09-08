#include<stdio.h>

int printodd(int odd[], int n);

int main(){
    int odd[]={ 2 , 3 , 4 , 5 , 6};
    printf("odd number is : %d",printodd(odd,5));
}
int printodd(int odd[],int n){
    int count=0;
    for(int i= 0; i<n; i++){
        if(odd[i]%2!=0){
            count++;  
        }
    }
    return count;
}
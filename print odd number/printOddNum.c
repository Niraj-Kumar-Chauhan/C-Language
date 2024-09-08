#include<stdio.h>

void printodd(int odd[], int n);

int main(){
    int odd[]={1 , 2 , 3 , 4 , 5 , 6 , 7 , 8};
    printodd(odd,8);

}
void printodd(int odd[], int n){
    for(int i=0; i<n; i++){
        if(odd[i]%2!=0){
            
            printf(" %d\t",odd[i]);
        } 
    }
}
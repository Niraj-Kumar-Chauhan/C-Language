#include<stdio.h>

void printeven(int odd[], int n);

int main(){
    int even[]={1 , 2 , 3 , 4 , 5 , 6 , 7 , 8};
    printeven(even,8);

}
void printeven(int even[], int n){
    for(int i=0; i<n; i++){
        if(even[i]%2==0){
            
            printf(" %d\t",even[i]);
        } 
    }
}
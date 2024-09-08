#include<stdio.h>
void matchChar(char str[],char ch);
int main(){
    char str[]="niraj chauhan";
    char ch='p';
    matchChar(str ,ch);
}
void matchChar(char str[],char ch){
     for(int i=0;str[i]!='\0';i++){
        if(str[i]==ch){
            printf("charecter matched!");
            return;
        }
     }
     printf("charecter not matched!");
}
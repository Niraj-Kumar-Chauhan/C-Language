#include<stdio.h>
void slice(char str[],int n,int m);
int main(){
     char str[]="helloworld";
     slice(str,3,6);
}
void slice(char str[],int n,int m){
    int j=0;
    char newstr[100];
    for(int i=n;i<=m;i++,j++){
       newstr[j]=str[i];
    }
    newstr[j]='\0';
    puts(newstr);
}
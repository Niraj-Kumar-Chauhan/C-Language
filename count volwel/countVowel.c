#include<stdio.h>
int countVowel(char str[]);
int main(){
    char str[]="niraj kumar chauhan";
    printf("no. of vowels are : %d",countVowel(str));

}
int countVowel(char str[]){
    int count=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            count++;
        }
    }
    return count;
}
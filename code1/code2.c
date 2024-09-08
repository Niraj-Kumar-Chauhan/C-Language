#include<stdio.h>
void india();
void french();
int main(){
    char ch;
    printf("enter character \n");
    scanf("%c",&ch);
    india();
    return 0;
}
void india(){
    printf("NAMASTE\n");
    french();
}
void french(){
    printf("BONJOUR");
}
#include<stdio.h>
#include<string.h>
struct student{
    int roll;
    float cgpa;
    char name[];
};
int main(){
    struct student s1;
        s1.roll=22034;
        s1.cgpa=7.5;
        // s1.name="niraj kumar";
        strcpy(s1.name,"niraj kumar");
       
        printf("student name = %s\n",s1.name);
        printf("student roll no. = %d\n",s1.roll);
        printf("student cgpa = %f\n",s1.cgpa);
    
    return 0;
}
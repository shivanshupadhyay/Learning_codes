#include<stdio.h>
#include<string.h>

struct Student
{
    char name[25];
    int age;
    char branch[10];
    //F for female and M for male
    char gender;
}s1;

int main()
{
    s1.age = 18;
    strcpy(s1.name, "Shivansh Upadhyay");
    printf("Name of Student 1: %s\n", s1.name);
    printf("Age of Student 1: %d\n", s1.age);   
    return 0;
}
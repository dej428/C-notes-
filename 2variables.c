#include <stdio.h>

int main(){

    //  Variable = allocated space in memory to store a value.
    //  we refer to a variable's name to acces the stored value. 
    //  that variable now behaves as if it was the value it contains.
    //But we need to declare what type of data we are storing. 
int x; //declaration
x = 123; //initialization 
int y = 321; //declaration & initialization 

    int age = 21;           //integer
    float gpa =2.05;        //floating point number 
    char grade = 'c';         //single character 
    char name[] = "Bro";    //array of characters 

    printf("Hello %n\n", name);
    printf ("You are %d years old\n", age);
    printf("Your average grade is %c\n", grade); 
    printf("Your gpa is %f\n", gpa);
    return 0; 
}
#include <stdio.h>
#include <string.h>

int main(){
    
    char name[25]; //bytes 
    int age; //listed variable with address of operator

    printf("What's your name?");
    //scanf("%s", name);
    fgets(name, 25, stdin);
    name [strlen(name)-1] = '\0'; 

    printf("How old are you?"); 
    scanf("%d", &age); //using scanf and format specifier of listed variable. 

    printf("Hello %s, how are you?", name);
    printf("\nYou are %d years old", age);

    return 0;
}
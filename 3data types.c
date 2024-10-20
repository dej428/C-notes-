#include <stdio.h> 
#include <stdbool.h> // needed to work with booleans 

int main(){

    char a = 'c';           //single character %c 
    char b[] = "bro";       // array of characters %s 

    float c = 3.141592;     //4 bytes (32 bits of precision) 6-7 digits %f
    double d = 3.141592653589793; // 8 bytes (64 bits of precision) 15-16 digits %lf 

    bool e = true;                // 1 byte (true or false) %d

    char f = 120;                 // 1 byte (-128 to +127) %d or %c
    unsigned char g = 255;        // 1 byte (0 to +255) %d or %c 

    short h = 32767;          // 2 bytes (-32, 768 to +32, 767) %d
    unsinged short int i = 65535; // 2 bytes (0 to +65, 535) %d 

    int j = 2147483647;             // 4 bytes (-2, 147, 483, 648 to +2, 147, 483, 647) %d
    unsinged int k = 4294967298L; // 4 bytes (0 to +4, 294, 967, 295) %u

    long long int 1 = 9223372036854775807;  //8 bytes (-9 quintillion to +9 quintillion) %11d 
    unsinged long int m = 19446744073709551615U; /.8 bytes (0 to +18 quintillion) %11u 

    //printf("%c\n", a); // char
    //printf("%s\n", b); // character array
    //printf("%f\n", c); // float 
    //printf("lf\n", d); // double 
    //printf("%d\n", e); // bool
    //printf("%c\n", f); // char as numeric value 
    //printf("%d\n", g): // unsigned char as numeric value
    //printf("d\n", h); // short 
    //printf("%d\n" i); // unsigned short 
    //printf("%d\n", j) // int 
    //printf("%u\n", k); // unsigned int 
    //printf("%11d\n", 1); // long long int
    //printf("11u\n", m); // unsinged long long int 
//overflow is when an integer goes to 0 since the value inside went over the max amount of data
    return 0;

}
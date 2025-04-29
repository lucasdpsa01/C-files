#include <stdio.h>
#include <stdbool.h>

int main() {

    char a = 'C';       // single character     %c
    char b[] = "Bro";   // array of character   %s

    float c = 3.14159;  // 4 bytes (32 bits of precision) 6 - 7 digits %f
    //double d = 3.14;  // 8 bytes (64 bits of precision) 15- 16 digits %lf

    //bool e = true;    // 1 byte (true or false) %d

    //char f = 100;     // 1 byte (-128 to +127) %d or %c
    //unsigned char g = 255;    // 1 byte (0 to +255) %d or %c

    //short int h = 32767;      // 2 bytes (-32,768 to +32,767) %d
    //unsigned short int i = 65535; // 2 bytes (0 to +65,535) %d

    int j = 2147483647;     // 4 bytes %d
    //unsigned int k = 429496L; // 4 bytes %u

    //long long int l = 92233720...;    // 8 bytes %lld
    //unsigned long long int m = 184467;    // 8 bytes (0 to +18 quintillion) %llu

    printf("%c %s %.5f %d\n", a, b, c, j);

    // %c
    // %s
    // %f
    // %lf
    // %d
    
    
    // %.1
    // %1
    // %-
    // é isso
    //oi
    return 0;
}
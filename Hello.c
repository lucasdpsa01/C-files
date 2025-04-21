#include <stdio.h>

int main(){
    //Comentário
    printf("I like pizza\n");

    int x; //declaration
    x = 10; //initialization
    int y = 123; //declaration + initialization

    int age = 20;
    float gpa = 1.74;
    char grade = 'A';
    char name[] = "Bro";

    printf("Olá %s\n", name);
    printf("Vc tem %d anos", age);
    printf("Vc está na turma %c\n", grade);
    printf("Sua altura é %f\n", gpa);

    return 0;
}
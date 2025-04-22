#include <stdio.h>
#include <string.h>

int main() {

    // arithmetic operators

    // + (adicao)
    // - (substração)
    // * (multiplicação)
    // / (divisão)
    // % (modulo)
    // ++ (incrementar)
    // -- (decrementar)

    int x = 6;
    int y = 3;

    int soma = x + y;
    int substracao = x - y;
    int mult = x * y;
    int divisao = x / 3;
    int modulo = x % y;

    int inc = x;
    int dec = --y;

    printf("%d soma\n", soma);
    printf("%d substração\n", substracao);
    printf("%d multiplição\n", mult);
    printf("%d divisão\n", divisao);
    printf("%d modulo\n", modulo);
    printf("%d incrementar\n", inc);
    printf("%d decrementar\n", dec);

    int age;
    char name[10];

    printf("Quantos anos vc tem? \n");
    scanf("%d", &age); // vc n pode colocar espaços
    fgets(name, 10, stdin);

    return 0;
}
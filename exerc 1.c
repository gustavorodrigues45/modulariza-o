/*Construa um algoritmo que possua uma função que leia uma variável inteira e uma procedure
que escreva esta variável. */

#include <stdio.h>

void escreverVariavel(int num) {
    printf("Variavel lida: %d\n", num);
}

int main() {
    int numero;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    escreverVariavel(numero);
    return 0;
}




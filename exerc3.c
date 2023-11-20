/*Faça uma procedure que lê 50 valores inteiros e imprime o maior e o menor deles*/

#include <stdio.h>

void encontrarMaiorMenor() {
    int numero, maior, menor;
    printf("Digite o 1 numero: ");
    scanf("%d", &numero);
    maior = menor = numero;

    for (int i = 2; i <= 50; i++) {
        printf("Digite o %d numero: ", i);
        scanf("%d", &numero);

        if (numero > maior) {
            maior = numero;
        }

        if (numero < menor) {
            menor = numero;
        }
    }

    printf("Maior numero: %d\n", maior);
    printf("Menor numero: %d\n", menor);
}

int main() {
    encontrarMaiorMenor();
    return 0;
}

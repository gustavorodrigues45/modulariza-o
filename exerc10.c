/*Faça uma procedure que recebe um valor inteiro e verifica se o valor é positivo ou negativo*/

#include <stdio.h>

void verificarPositivoNegativo(int valor) {
    if (valor > 0) {
        printf("O valor eh positivo.\n");
    } else if (valor < 0) {
        printf("O valor eh negativo.\n");
    } else {
        printf("O valor eh zero.\n");
    }
}

int main() {
    int numero;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    verificarPositivoNegativo(numero);
    return 0;
}

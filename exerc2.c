/*Construa uma função que verifique se um número inteiro, passado como parâmetro, é par, retornando 1 se verdadeiro e 2 caso contrário.
*/

#include <stdio.h>

int verificarPar(int num) {
    if (num % 2 == 0) {
        return 1; // verdadeiro (par)
    } else {
        return 2; // falso (ímpar)
    }
}

int main() {
    int numero;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    int resultado = verificarPar(numero);
    printf("%d\n", resultado);
    return 0;
}

/*Escreva uma função que recebe, por parâmetro, um valor inteiro e positivo e retorna o somatório desse valor.
*/

#include <stdio.h>

int calcularSomatorio(int num) {
    int somatorio = 0;
    for (int i = 1; i <= num; i++) {
        somatorio += i;
    }
    return somatorio;
}

int main() {
    int numero;
    printf("Digite um valor inteiro e positivo: ");
    scanf("%d", &numero);
    int resultado = calcularSomatorio(numero);
    printf("Somatorio: %d\n", resultado);
    return 0;
}

/*Faça uma função que recebe, por parâmetro, um valor inteiro e positivo e retorna o número de divisores desse valor.
*/

#include <stdio.h>

int contarDivisores(int num) {
    int count = 0;
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int numero;
    printf("Digite um valor inteiro e positivo: ");
    scanf("%d", &numero);
    int resultado = contarDivisores(numero);
    printf("Numero de divisores: %d\n", resultado);
    return 0;
}

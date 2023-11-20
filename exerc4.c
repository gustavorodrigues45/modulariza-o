/*Faça uma procedure que recebe, por parâmetro, um valor N e calcula e escreve a tabuada de 1 até N.
*/

#include <stdio.h>

void calcularTabuada(int n) {
    for (int i = 1; i <= n; i++) {
        printf("\nTabuada do %d:\n", i);
        for (int j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
    }
}

int main() {
    int valorN;
    printf("Digite um valor N: ");
    scanf("%d", &valorN);
    calcularTabuada(valorN);
    return 0;
}

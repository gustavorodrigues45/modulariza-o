/*Faça uma função que recebe a média final de um aluno por parâmetro e retorna o seu conceito, conforme a tabela.
*/

#include <stdio.h>

char obterConceito(float media) {
    if (media >= 0 && media <= 4.9) {
        return 'D';
    } else if (media <= 6.9) {
        return 'C';
    } else if (media <= 8.9) {
        return 'B';
    } else if (media <= 10.0) {
        return 'A';
    } else {
        return 'I'; // conceito inválido
    }
}

int main() {
    float media;
    printf("Digite a media final do aluno: ");
    scanf("%f", &media);
    char conceito = obterConceito(media);
    printf("Conceito: %c\n", conceito);
    return 0;
}

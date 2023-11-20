/*Desenvolva uma procedure que recebe as 3 notas de um aluno por parâmetro e uma letra. Se a letra for A a procedure calcula a média aritmética das notas do aluno, se for P, a sua média ponderada (pesos: 5, 3 e 2 respectivamente) e se for H, a sua média harmônica. A média calculada também deve retornar por parâmetro.
*/

#include <stdio.h>

void calcularMediaAluno(float nota1, float nota2, float nota3, char tipoMedia, float *media) {
    if (tipoMedia == 'A') {
        *media = (nota1 + nota2 + nota3) / 3;
    } else if (tipoMedia == 'P') {
        *media = (5 * nota1 + 3 * nota2 + 2 * nota3) / 10.0;
    } else if (tipoMedia == 'H') {
        *media = 3 / ((1 / nota1) + (1 / nota2) + (1 / nota3));
    } else {
        printf("Tipo de média invalido.\n");
        *media = -1; // valor inválido
    }
}

int main() {
    float nota1, nota2, nota3, media;
    char tipoMedia;
    
    printf("Digite a 1a nota: ");
    scanf("%f", &nota1);
    
    printf("Digite a 2a nota: ");
    scanf("%f", &nota2);
    
    printf("Digite a 3a nota: ");
    scanf("%f", &nota3);
    
    printf("Escolha o tipo de media (A, P, H): ");
    scanf(" %c", &tipoMedia);
    
    calcularMediaAluno(nota1, nota2, nota3, tipoMedia, &media);
    
    if (media != -1) {
        printf("Media do aluno: %.2f\n", media);
    }
    
    return 0;
}

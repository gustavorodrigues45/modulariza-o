/*A prefeitura de uma cidade fez uma pesquisa entre os seus habitantes, coletando dados sobre o salário e número de filhos. Faça uma procedure que leia esses dados para um número não determinado de pessoas e imprima a média de salário da população, a média do número de filhos, o maior salário e o percentual de pessoas com salário até R$2.000,00.
*/

#include <stdio.h>

void realizarPesquisa() {
    int contador = 0;
    float salario, totalSalario = 0, mediaSalario, maiorSalario = 0;
    int numeroFilhos, totalFilhos = 0;
    float percentualSalarioAte2000 = 0;

    printf("Entre com os dados dos habitantes. Digite -1 para encerrar.\n");

    while (1) {
        printf("Salario do habitante %d: ", contador + 1);
        scanf("%f", &salario);

        if (salario == -1) {
            break;
        }

        printf("Numero de filhos do habitante %d: ", contador + 1);
        scanf("%d", &numeroFilhos);

        totalSalario += salario;
        totalFilhos += numeroFilhos;
        if (salario > maiorSalario) {
            maiorSalario = salario;
        }
        if (salario <= 2000) {
            percentualSalarioAte2000++;
        }

        contador++;
    }

    if (contador > 0) {
        mediaSalario = totalSalario / contador;
        percentualSalarioAte2000 = (percentualSalarioAte2000 / contador) * 100;

        printf("\nResultados da pesquisa:\n");
        printf("Media de salario da população: %.2f\n", mediaSalario);
        printf("Media do numero de filhos: %.2f\n", (float)totalFilhos / contador);
        printf("Maior salario: %.2f\n", maiorSalario);
        printf("Percentual de pessoas com salario ate R$2.000,00: %.2f%%\n", percentualSalarioAte2000);
    } else {
        printf("Nenhum habitante cadastrado.\n");
    }
}

int main() {
    realizarPesquisa();
    return 0;
}

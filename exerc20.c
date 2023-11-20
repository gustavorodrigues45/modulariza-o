/*Escreva uma procedure que recebe 3 valores reais X, Y e Z e que verifique se esses valores podem ser os comprimentos dos lados de um triângulo e, neste caso, retornar qual o tipo de triângulo formado.
*/

#include <stdio.h>

void verificarTipoTriangulo(float x, float y, float z) {
    if (x + y > z && x + z > y && y + z > x) {
        if (x == y && y == z) {
            printf("Triângulo Equilatero\n");
        } else if (x == y || y == z || x == z) {
            printf("Triangulo Isosceles\n");
        } else {
            printf("Triangulo Escaleno\n");
        }
    } else {
        printf("Os valores nao formam um triangulo.\n");
    }
}

int main() {
    float x, y, z;
    printf("Digite os comprimentos dos lados do triangulo (X Y Z): ");
    scanf("%f %f %f", &x, &y, &z);
    verificarTipoTriangulo(x, y, z);
    return 0;
}

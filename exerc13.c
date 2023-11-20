/*Faça uma função que recebe por parâmetro o raio de uma esfera e calcula o seu volume (v = 4/3.π.R³).
*/

#include <stdio.h>
#include <math.h>

float calcularVolumeEsfera(float raio) {
    return (4.0 / 3.0) * M_PI * pow(raio, 3);
}

int main() {
    float raio;
    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);
    float volume = calcularVolumeEsfera(raio);
    printf("Volume da esfera: %.2f\n", volume);
    return 0;
}


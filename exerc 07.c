#include <stdio.h>

int main() {

    
    char nome[50], sexo;
    float altura, peso;
    int numHomens = 0, numMulheres = 0;
    float somaAlturaHomens = 0, somaAlturaMulheres = 0;
    float somaPesoHomens = 0, somaPesoMulheres = 0;
    float somaAlturaGrupo = 0, somaPesoGrupo = 0;

    for (int i = 0; i < 10; i++) {
        printf("Nome: ");
        scanf("%s", nome);
        printf("Sexo (M/F): ");
        scanf(" %c", &sexo);
        printf("Altura (m): ");
        scanf("%f", &altura);
        printf("Peso (kg): ");
        scanf("%f", &peso);

        if (sexo == 'M' || sexo == 'm') {
            numHomens++;
            somaAlturaHomens += altura;
            somaPesoHomens += peso;
        } else if (sexo == 'F' || sexo == 'f') {
            numMulheres++;
            somaAlturaMulheres += altura;
            somaPesoMulheres += peso;
        }

        somaAlturaGrupo += altura;
        somaPesoGrupo += peso;
    }

    float mediaAlturaHomens = numHomens ? somaAlturaHomens / numHomens : 0;
    float mediaAlturaMulheres = numMulheres ? somaAlturaMulheres / numMulheres : 0;
    float mediaAlturaGrupo = (numHomens + numMulheres) ? somaAlturaGrupo / (numHomens + numMulheres) : 0;
    float mediaPesoHomens = numHomens ? somaPesoHomens / numHomens : 0;
    float mediaPesoMulheres = numMulheres ? somaPesoMulheres / numMulheres : 0;
    float mediaPesoGrupo = (numHomens + numMulheres) ? somaPesoGrupo / (numHomens + numMulheres) : 0;

    printf("Homens: %d, Mulheres: %d\n", numHomens, numMulheres);
    printf("Altura média (H): %.2f m, Altura média (M): %.2f m, Altura média (G): %.2f m\n", mediaAlturaHomens, mediaAlturaMulheres, mediaAlturaGrupo);
    printf("Peso médio (H): %.2f kg, Peso médio (M): %.2f kg, Peso médio (G): %.2f kg\n", mediaPesoHomens, mediaPesoMulheres, mediaPesoGrupo);

    return 0;
}

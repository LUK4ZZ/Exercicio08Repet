#include <stdio.h>

int main() {

    
    int numMoradores = 50;
    char elevadorFrequente[numMoradores];
    char periodoFrequente[numMoradores];

    int contElevadorA = 0, contElevadorB = 0, contElevadorC = 0;
    int contMatutino = 0, contVespertino = 0, contNoturno = 0;

    for (int i = 0; i < numMoradores; i++) {
        printf("Informe o elevador mais utilizado (A, B ou C) pelo morador %d: ", i + 1);
        scanf(" %c", &elevadorFrequente[i]);

        printf("Informe o período mais utilizado (M, V ou N) pelo morador %d: ", i + 1);
        scanf(" %c", &periodoFrequente[i]);

    
        switch (elevadorFrequente[i]) {
            case 'A':
                contElevadorA++;
                break;
            case 'B':
                contElevadorB++;
                break;
            case 'C':
                contElevadorC++;
                break;
        }

      
        switch (periodoFrequente[i]) {
            case 'M':
                contMatutino++;
                break;
            case 'V':
                contVespertino++;
                break;
            case 'N':
                contNoturno++;
                break;
        }
    }


    char elevadorMaisFrequentado;
    int maxElevador = contElevadorA;
    if (contElevadorB > maxElevador) {
        maxElevador = contElevadorB;
        elevadorMaisFrequentado = 'B';
    }
    if (contElevadorC > maxElevador) {
        maxElevador = contElevadorC;
        elevadorMaisFrequentado = 'C';
    }

    
    char periodoMaisUsado;
    int maxPeriodo = contMatutino;
    if (contVespertino > maxPeriodo) {
        maxPeriodo = contVespertino;
        periodoMaisUsado = 'V';
    }
    if (contNoturno > maxPeriodo) {
        maxPeriodo = contNoturno;
        periodoMaisUsado = 'N';
    }

    float diferencaPercentual = ((float)maxPeriodo - (float)contMatutino) / (float)contMatutino * 100;

   
    int contElevadorMedio = (contElevadorA + contElevadorB + contElevadorC) - maxElevador;
    float percentagemElevadorMedio = ((float)contElevadorMedio / numMoradores) * 100;


    printf("O período mais usado é %c e pertence ao elevador %c.\n", periodoMaisUsado, elevadorMaisFrequentado);
    printf("O elevador mais frequentado é %c e se concentra no período %c.\n", elevadorMaisFrequentado, periodoMaisUsado);
    printf("Diferença percentual entre o mais usado e o menos usado: %.2f%%\n", diferencaPercentual);
    printf("Percentagem sobre o total de serviços prestados do elevador de média utilização: %.2f%%\n", percentagemElevadorMedio);

}

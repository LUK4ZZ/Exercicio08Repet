#include <stdio.h>

int main() {


    int capacidade = 100;
    int idade, otimo = 0, bom = 0, regular = 0, ruim = 0, pessimo = 0;
    int idadeRuimTotal = 0, maiorIdadeRuim = -1, maiorIdadeOtimo = -1;
    char opiniao;

    for (int i = 0; i < capacidade; i++) {
        printf("Informe a idade do espectador %d: ", i + 1);
        scanf("%d", &idade);

        printf("Informe a opinião (A, B, C, D ou E) do espectador %d: ", i + 1);
        scanf(" %c", &opiniao);

        switch (opiniao) {
            case 'A':
                otimo++;
                if (idade > maiorIdadeOtimo) {
                    maiorIdadeOtimo = idade;
                }
                break;
            case 'B':
                bom++;
                break;
            case 'C':
                regular++;
                break;
            case 'D':
                ruim++;
                idadeRuimTotal += idade;
                if (idade > maiorIdadeRuim) {
                    maiorIdadeRuim = idade;
                }
                break;
            case 'E':
                pessimo++;
                if (idade > maiorIdadeRuim) {
                    maiorIdadeRuim = idade;
                }
                break;
            default:
                printf("Opinião inválida. Por favor, insira A, B, C, D ou E.\n");
                i--; 
                break;
        }
    }

  
    float diferencaPercentual = (float)(bom - regular) / capacidade * 100;
    float mediaIdadeRuim = (ruim > 0) ? (float)idadeRuimTotal / ruim : 0;
    float percentagemPessimo = (float)pessimo / capacidade * 100;
    int diferencaIdadeMaxima = maiorIdadeOtimo - maiorIdadeRuim;


    printf("Quantidade de respostas 'Ótimo': %d\n", otimo);
    printf("Diferença percentual entre 'Bom' e 'Regular': %.2f%%\n", diferencaPercentual);
    printf("Média de idade das pessoas que responderam 'Ruim': %.2f\n", mediaIdadeRuim);
    printf("Percentagem de respostas 'Péssimo': %.2f%%\n", percentagemPessimo);
    printf("Diferença de idade entre a maior idade 'Ótimo' e a maior idade 'Ruim': %d\n", diferencaIdadeMaxima);

}

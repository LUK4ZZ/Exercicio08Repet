#include <stdio.h>

#define MAX_PESSOAS 300
#define MIN_PESSOAS 50
#define MAX_NOME 50

int main() {


    char nomes[MAX_PESSOAS][MAX_NOME];
    int idades[MAX_PESSOAS];
    char sexos[MAX_PESSOAS];
    int votos[MAX_PESSOAS];

    int numPessoas = 0;

  
    do {
        printf("Digite o número de pessoas entrevistadas (%d-%d): ", MIN_PESSOAS, MAX_PESSOAS);
        scanf("%d", &numPessoas);
    } while (numPessoas < MIN_PESSOAS || numPessoas > MAX_PESSOAS);


    for (int i = 0; i < numPessoas; i++) {
        printf("Dados da pessoa %d:\n", i + 1);
        printf("Nome: ");
        scanf("%s", nomes[i]);
        printf("Idade: ");
        scanf("%d", &idades[i]);
        printf("Sexo (M/F): ");
        scanf(" %c", &sexos[i]);


        if (idades[i] <= 12) {
            printf("A idade deve ser maior que 12 anos. Tente novamente.\n");
            i--;
            continue;
        }

        printf("Voto (1-5):\n");
        printf("1- Sam Kerr - Australia\n");
        printf("2- Alex Morgan - Estados Unidos\n");
        printf("3- Dzsenifer Marozsan\n");
        printf("4- Amandine Henry - França\n");
        printf("5- Marta Vieira - Brasil\n");
        scanf("%d", &votos[i]);


        if (votos[i] < 1 || votos[i] > 5) {
            printf("Voto inválido. Tente novamente.\n");
            i--;
        }
    }

  
    int contVotos[5] = {0}; 
    for (int i = 0; i < numPessoas; i++) {
        contVotos[votos[i] - 1]++;
    }
    printf("\nQuantidade de votos para cada jogadora:\n");
    printf("1- Sam Kerr - Australia: %d votos\n", contVotos[0]);
    printf("2- Alex Morgan - Estados Unidos: %d votos\n", contVotos[1]);
    printf("3- Dzsenifer Marozsan: %d votos\n", contVotos[2]);
    printf("4- Amandine Henry - França: %d votos\n", contVotos[3]);
    printf("5- Marta Vieira - Brasil: %d votos\n", contVotos[4]);

   
    printf("\nJogadoras mais votadas:\n");
    int maxVotos = 0;
    for (int i = 0; i < 5; i++) {
        if (contVotos[i] > maxVotos) {
            maxVotos = contVotos[i];
        }
    }
    for (int i = 0; i < 5; i++) {
        if (contVotos[i] == maxVotos) {
            switch (i) {
                case 0:
                    printf("1- Sam Kerr - Australia\n");
                    break;
                case 1:
                    printf("2- Alex Morgan - Estados Unidos\n");
                    break;
                case 2:
                    printf("3- Dzsenifer Marozsan\n");
                    break;
                case 3:
                    printf("4- Amandine Henry - França\n");
                    break;
                case 4:
                    printf("5- Marta Vieira - Brasil\n");
                    break;
            }
        }
    }


    printf("\nPessoas entrevistadas por sexo e idade:\n");
    int mulheres = 0;
    for (int i = 0; i < numPessoas; i++) {
        printf("Nome: %s, Idade: %d, Sexo: %c\n", nomes[i], idades[i], sexos[i]);
        if (sexos[i] == 'F') {
            mulheres++;
        }
    }


    printf("\nPessoas maiores de idade que votaram na Marta Vieira:\n");
    for (int i = 0; i < numPessoas; i++) {
        if (idades[i] >= 18 && votos[i] == 5) {
            printf("%s\n", nomes[i]);
        }
    }


    printf("\nQuantidade de mulheres que participaram da pesquisa: %d\n", mulheres);

    return 0;
}

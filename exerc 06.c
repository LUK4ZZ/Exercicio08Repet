#include <stdio.h>

int main() {

    
    char continuar;
    
    do {
        int ano, mes, dias;

       
        printf("Digite o ano: ");
        scanf("%d", &ano);
        printf("Digite o mês (1-12): ");
        scanf("%d", &mes);

    
        int bissexto = ((ano % 4 == 0) && (ano % 100 != 0)) || (ano % 400 == 0);

       
        switch (mes) {
            case 1:  // Janeiro
            case 3:  // Março
            case 5:  // Maio
            case 7:  // Julho
            case 8:  // Agosto
            case 10: // Outubro
            case 12: // Dezembro
                dias = 31;
                break;
            case 4:  // Abril
            case 6:  // Junho
            case 9:  // Setembro
            case 11: // Novembro
                dias = 30;
                break;
            case 2:  // Fevereiro
                if (bissexto) {
                    dias = 29;
                } else {
                    dias = 28;
                }
                break;
            default:
                printf("Mês inválido.\n");
                dias = -1; 
                break;
        }

        if (dias != -1) {
            printf("O mês %d/%d tem %d dias.\n", mes, ano, dias);
        }

       
        printf("VOCÊ DESEJA OUTRAS ENTRADAS (S/?)? ");
        scanf(" %c", &continuar);

    } while (continuar == 'S' || continuar == 's');
}

#include <stdio.h>

int main() {

    
    int n;
    int termoAnterior = 0, termoAtual = 1, proximoTermo;

    printf("Digite o valor de n (número não negativo): ");
    scanf("%d", &n);

    if (n < 0) {
        printf("O valor de n deve ser não negativo.\n");
        return 1;
    }

    if (n == 0) {
        printf("O termo de ordem 0 na sequência de Fibonacci é 0.\n");
    } else if (n == 1) {
        printf("O termo de ordem 1 na sequência de Fibonacci é 1.\n");
    } else {
        for (int i = 2; i <= n; i++) {
            proximoTermo = termoAnterior + termoAtual;
            termoAnterior = termoAtual;
            termoAtual = proximoTermo;
        }
        printf("O termo de ordem %d na sequência de Fibonacci é %lld.\n", n, termoAtual);
    }
}

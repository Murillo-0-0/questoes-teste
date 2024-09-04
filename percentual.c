#include <stdio.h>

int main() {
    double faturamentos[5] = {67836.43, 36678.66, 29229.88, 27165.48, 19849.53};
    char *estados[5] = {"SP", "RJ", "MG", "ES", "Outros"};
    double total_faturamento = 0.0;

    // Calcula o total de faturamento
    for (int i = 0; i < 5; i++) {
        total_faturamento += faturamentos[i];
    }

    // Calcula e imprime o percentual de cada estado
    for (int i = 0; i < 5; i++) {
        double percentual = (faturamentos[i] / total_faturamento) * 100;
        printf("%s: %.2f%%\n", estados[i], percentual);
    }

    return 0;
}

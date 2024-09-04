#include <stdio.h>

int pertence_fibonacci(int n) {
    int a = 0, b = 1, c;

    if (n == a || n == b) {
        return 1;
    }

    while (b < n) {
        c = a + b;
        a = b;
        b = c;
    }

    return (b == n);
}

int main() {
    int numero;

    printf("Informe um numero: ");
    scanf("%d", &numero);

    if (pertence_fibonacci(numero)) {
        printf("O numero %d pertence a sequencia de Fibonacci.\n", numero);
    } else {
        printf("O numero %d NAO pertence a sequencia de Fibonacci.\n", numero);
    }

    return 0;
}

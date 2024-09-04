#include <stdio.h>
#include <string.h>

void inverter_string(char *str) {
    int n = strlen(str);
    for (int i = 0; i < n / 2; i++) {
        char temp = str[i];
        str[i] = str[n - 1 - i];
        str[n - 1 - i] = temp;
    }
}

int main() {
    char string[100];

    printf("Informe a string a ser invertida: ");
    scanf("%s", string);

    inverter_string(string);

    printf("String invertida: %s\n", string);

    return 0;
}

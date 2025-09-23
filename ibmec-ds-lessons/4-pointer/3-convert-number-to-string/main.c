#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Função que formata o valor em moeda brasileira
char* monet(double v) {
    static char buf[50];  // buffer estático para retorno (cuidado em uso concorrente)

    long int_part = (long)v;  // parte inteira
    int cents = (int)((v - int_part) * 100 + 0.5); // parte decimal (arredondada)

    char temp[50];
    char int_str[50];
    int i, j, len, count = 0;

    // Converte parte inteira para string
    sprintf(int_str, "%ld", int_part);
    len = strlen(int_str);

    // Insere pontos como separadores de milhar
    j = 0;
    for (i = len - 1; i >= 0; i--) {
        temp[j++] = int_str[i];
        count++;
        if (count % 3 == 0 && i > 0) {
            temp[j++] = '.';
        }
    }
    temp[j] = '\0';

    // Inverte string formatada
    for (i = 0; i < j; i++) {
        int_str[i] = temp[j - i - 1];
    }
    int_str[j] = '\0';

    // Monta resultado final
    sprintf(buf, "R$ %s,%02d", int_str, cents);

    return buf;
}

int main() {
    double valor;

    printf("Digite um valor: ");
    scanf("%lf", &valor);

    printf("Valor formatado: %s\n", monet(valor));

    return 0;
}

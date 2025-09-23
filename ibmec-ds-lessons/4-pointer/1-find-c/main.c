#include <stdio.h>

char *strchr(const char *s, char c) {
    while (*s != '\0') {
        if (*s == c) {
            return (char *)s; // Retorna o endereço da primeira ocorrência
        }
        s++;
    }
    return NULL; // Não encontrou
}

int main() {
    char s[100];
    char c;
    char *resultado;

    printf("Digite uma string: ");
    fgets(s, sizeof(s), stdin);

    printf("Digite o caractere a ser buscado: ");
    scanf(" %c", &c);

    resultado = strchr(s, c);

    if (resultado != NULL) {
        printf("Caractere '%c' encontrado na posição: %ld\n", c, resultado - s);
        printf("Substring a partir do caractere encontrado: %s\n", resultado);
    } else {
        printf("Caractere '%c' não encontrado.\n", c);
    }

    return 0;
}

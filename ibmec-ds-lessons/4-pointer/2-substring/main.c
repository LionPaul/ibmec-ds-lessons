#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Função que devolve uma substring de s iniciando em i com no máximo n caracteres
char* strsub(const char* s, int i, int n) {
    int len = strlen(s);

    // Se o índice for inválido, retorna string vazia
    if (i < 0 || i >= len) {
        char* vazio = (char*)malloc(1);
        vazio[0] = '\0';
        return vazio;
    }

    // Ajusta n caso ultrapasse o tamanho da string original
    if (i + n > len) {
        n = len - i;
    }

    // Aloca memória para a nova substring (+1 para o terminador nulo)
    char* sub = (char*)malloc((n + 1) * sizeof(char));
    if (sub == NULL) {
        printf("Erro de alocacao de memoria!\n");
        exit(1);
    }

    // Copia os caracteres
    strncpy(sub, s + i, n);
    sub[n] = '\0';  // garante o fim da string

    return sub;
}

int main() {
    char texto[] = "Programacao em C";

    // Pega substring a partir da posição 3, com no máximo 5 caracteres
    char* resultado = strsub(texto, 3, 5);

    printf("Substring: %s\n", resultado);

    // Libera memória
    free(resultado);

    return 0;
}
/*
 * =====================================================================
 * File: 01-find-character/main.c
 * ---------------------------------------------------------------------
 *
 * Description
 * -----------
 * C program that implements the function strchr(s, c).
 * The function returns the address of the first occurrence of the character 'c'
 * in the string 's', or NULL if the character is not found.
 *
 * Project/Module: Standard String Utilities
 *
 * Metadata
 * --------
 * Author: Paulo Leão
 * Created: 2025-10-13
 * Last Modified: 2025-10-13
 * License: MIT License
 * =====================================================================
 */

#include <stdio.h>
#include <stddef.h> 

char *strchr(const char *s, int c) {
    do {
        if (*s == (char)c) {
            return (char *)s;
        }
    } while (*s++ != '\0');

    return NULL;
}

int main() {
    char texto[100]; 
    char c;
    
    printf("Digite o texto (max 99 chars, sem espacos): ");
    if (scanf("%99s", texto) != 1) {
        fprintf(stderr, "Erro na leitura do texto.\n");
        return 1;
    }
    
    printf("Digite o caractere a procurar: ");
    if (scanf(" %c", &c) != 1) {
        fprintf(stderr, "Erro na leitura do caractere.\n");
        return 1;
    }
    
    char *resultado = strchr(texto, c); 

    if (resultado != NULL) {
        printf("Caractere '%c' encontrado no endereco: %p\n", c, (void *)resultado);
        printf("Restante da string: \"%s\"\n", resultado);
    } else {
        printf("Caractere '%c' nao encontrado na string \"%s\".\n", c, texto);
    }
    
    return 0;
}
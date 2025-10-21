/*
 * =====================================================================
 * File: 02-string-manipulate/main.c
 * ---------------------------------------------------------------------
 *
 * Description
 * -----------
 * Implements the strsub(s, i, n) User-Defined Function (UDF).
 * The function returns a dynamically allocated substring of 's' 
 * starting at index 'i' with a maximum length of 'n' characters.
 * The original string 's' remains unmodified.
 *
 * Project/Module: Custom String Utilities
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
#include <stdlib.h> 
#include <string.h> 

char *strsub(const char *s, int i, int n) {
    size_t len_s = strlen(s);
    
    if (i < 0 || (size_t)i >= len_s) {
        return NULL;
    }
    size_t restantes = len_s - i;
    size_t len_sub;
    if ((size_t)n < restantes) {
        len_sub = (size_t)n;
    } else {
        len_sub = restantes;
    }
    
    char *sub = (char *)malloc(len_sub + 1);
    
    if (sub == NULL) {
        return NULL; 
    }
    
    strncpy(sub, s + i, len_sub);
    
    sub[len_sub] = '\0';
    
    return sub;
}


int main() {
    const char *texto = "Desenvolvimento em Linguagem C";
    char *sub_str;

    printf("String Original: \"%s\"\n", texto);
    printf("Comprimento da Original: %zu\n\n", strlen(texto));

    int i1 = 16, n1 = 6;
    sub_str = strsub(texto, i1, n1);
    if (sub_str) {
        printf("strsub(s, %d, %d) -> \"%s\"\n", i1, n1, sub_str); 
        free(sub_str); 
    }

    int i2 = 18, n2 = 50; 
    sub_str = strsub(texto, i2, n2);
    if (sub_str) {
        printf("strsub(s, %d, %d) -> \"%s\"\n", i2, n2, sub_str); 
        free(sub_str);
    }

    int i3 = 40, n3 = 5;
    sub_str = strsub(texto, i3, n3);
    if (sub_str == NULL) {
        printf("strsub(s, %d, %d) -> NULL (Posição inicial inválida)\n", i3, n3);
    }
    
    return 0;
}
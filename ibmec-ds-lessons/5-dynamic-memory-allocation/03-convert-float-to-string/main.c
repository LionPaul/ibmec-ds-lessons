/*
 * =====================================================================
 * File: 03-convert-float-to-string/main.c
 * ---------------------------------------------------------------------
 *
 * Description
 * -----------
 *C.U.F. denominada monet(v) que recebe um valor real e devolve uma string com a representação
monetária desse valor. Por exemplo, a chamada monet(1234.56) deve devolver "R$ 1.234,56" como
resposta.
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
#include <math.h>

char *monet(double v) {
    const int max_monet_len = 30;

    char *monet_str = (char *)malloc(max_monet_len);
    if (monet_str == NULL) {
        return NULL;
    }
    
    double abs_v = fabs(v);
    
    long parte_inteira = (long)abs_v;
    int centavos = (int)round((abs_v - parte_inteira) * 100.0);
    
    if (centavos == 100) {
        parte_inteira++;
        centavos = 0;
    }

    char temp_inteiro[max_monet_len];
    temp_inteiro[0] = '\0';
    
    char buffer_num[20];
    sprintf(buffer_num, "%ld", parte_inteira);
    
    int len_num = strlen(buffer_num);
    int count = 0;
    
    for (int i = len_num - 1; i >= 0; i--) {
        memmove(temp_inteiro + 1, temp_inteiro, strlen(temp_inteiro) + 1);
        temp_inteiro[0] = buffer_num[i];
        
        count++;
        
        if (i > 0 && count % 3 == 0) {
            memmove(temp_inteiro + 1, temp_inteiro, strlen(temp_inteiro) + 1);
            temp_inteiro[0] = '.';
        }
    }
    
    if (v < 0) {
        monet_str[0] = '-';
        monet_str[1] = '\0';
    } else {
        monet_str[0] = '\0';
    }

    sprintf(monet_str + strlen(monet_str), "R$ %s,%02d", temp_inteiro, centavos);
    
    return monet_str;
}

int main() {
    double valores[] = {1234.56, 1234567.89, 987.65, 0.5, 1000000.00, 5.0, 1234.567, -123.45};
    int num_valores = sizeof(valores) / sizeof(double);
    char *resultado;

    printf("--- Testes da Funcao monet(v) ---\n\n");

    for (int i = 0; i < num_valores; i++) {
        resultado = monet(valores[i]);
        if (resultado) {
            printf("Valor: %15.2f  =>  String: %s\n", valores[i], resultado);
            free(resultado);
        } else {
            printf("Erro ao processar o valor: %.2f\n", valores[i]);
        }
    }
    
    return 0;
}
#include <stdio.h>

typedef struct {
    double real;     
    double imaginaria;  
} Complexo;

Complexo somar_complexos(Complexo n1, Complexo n2) {
    Complexo resultado;
    
    resultado.real = n1.real + n2.real;
    
    resultado.imaginaria = n1.imaginaria + n2.imaginaria;
    
    return resultado;
}

void exibir_complexo(Complexo n) {
    printf("%.2f", n.real);
    
    if (n.imaginaria >= 0) {
        printf(" + %.2fi", n.imaginaria);
    } else {
        printf(" - %.2fi", -n.imaginaria);
    }
}

int main() {
    
    Complexo num1;
    Complexo num2;
    Complexo soma;
    
    num1.real = 3.5;
    num1.imaginaria = 2.0;
    
    num2.real = 1.2;
    num2.imaginaria = -4.5;
    
    soma = somar_complexos(num1, num2);
    
    printf("Numero 1: ");
    exibir_complexo(num1);
    printf("\n");
    
    printf("Numero 2: ");
    exibir_complexo(num2);
    printf("\n");

    printf("-------------------------------\n");
    
    printf("Soma:     ");
    exibir_complexo(soma);
    printf("\n");
    

    return 0;
}
#include <stdio.h>

// Função que retorna o sucessor de n
int suc(int n) {
    return n + 1;
}

// Função que retorna o predecessor de n
int pred(int n) {
    return n - 1;
}

// Soma recursiva usando apenas suc() e pred()
int soma(int a, int b) {
    if (b == 0) {
        return a;
    }
    return soma(suc(a), pred(b));
}

// Produto recursivo usando soma()
int produto(int a, int b) {
    if (b == 0) {
        return 0;
    }
    return soma(a, produto(a, pred(b)));
}

int main() {
    int x, y;

    printf("Digite dois numeros naturais: ");
    scanf("%d %d", &x, &y);

    printf("Soma = %d\n", soma(x, y));
    printf("Produto = %d\n", produto(x, y));

    return 0;
}
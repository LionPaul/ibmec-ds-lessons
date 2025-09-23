#include <stdio.h>

// Função recursiva que calcula o produto usando somas sucessivas
int produtoRecursivo(int a, int b) {
    if (b == 0) {
        return 0; // caso base
    }
    return a + produtoRecursivo(a, b - 1); // soma sucessiva
}

int main() {
    int x, y;

    printf("Digite dois numeros naturais: ");
    scanf("%d %d", &x, &y);

    if (x < 0 || y < 0) {
        printf("Erro: os numeros devem ser naturais (>= 0).\n");
        return 1;
    }

    printf("Produto: %d\n", produtoRecursivo(x, y));

    return 0;
}

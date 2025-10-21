#include <stdio.h>
#include <math.h> 

typedef struct Ponto {
    double x; 
    double y; 
} Ponto; 

double calcular_distancia(Ponto p1, Ponto p2) {
   
    double dx = p2.x - p1.x;
    double dy = p2.y - p1.y;
    

    return sqrt(pow(dx, 2) + pow(dy, 2));
    
}

int main() {
    
    Ponto ponto1;
    Ponto ponto2;
    double distancia;
    
    printf("--- Coordenadas do Ponto 1 ---\n");
    printf("Digite a coordenada X: ");
    if (scanf("%lf", &ponto1.x) != 1) {
        fprintf(stderr, "Erro de leitura para X1.\n");
        return 1;
    }

    printf("Digite a coordenada Y: ");
    if (scanf("%lf", &ponto1.y) != 1) {
        fprintf(stderr, "Erro de leitura para Y1.\n");
        return 1;
    }
    
    printf("\n--- Coordenadas do Ponto 2 ---\n");
    printf("Digite a coordenada X: ");
    if (scanf("%lf", &ponto2.x) != 1) {
        fprintf(stderr, "Erro de leitura para X2.\n");
        return 1;
    }

    printf("Digite a coordenada Y: ");
    if (scanf("%lf", &ponto2.y) != 1) {
        fprintf(stderr, "Erro de leitura para Y2.\n");
        return 1;
    }

    distancia = calcular_distancia(ponto1, ponto2);
    
    printf("\n-------------------------------------------------\n");
    printf("Ponto 1: (%.2f, %.2f)\n", ponto1.x, ponto1.y);
    printf("Ponto 2: (%.2f, %.2f)\n", ponto2.x, ponto2.y);
    printf("A distancia entre os dois pontos e: %.4f\n", distancia);
    
    return 0;
}
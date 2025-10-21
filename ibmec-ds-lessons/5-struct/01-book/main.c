#include <stdio.h>
#include <string.h>

int main() {
    
    struct {
        char titulo[100];
        char autor[100];
        char editora[50];
        int ano_publicacao;
    } meu_livro;

    strcpy(meu_livro.titulo, "O Codigo Limpo");
    strcpy(meu_livro.autor, "Robert C. Martin");
    strcpy(meu_livro.editora, "Alta Books");
    
    meu_livro.ano_publicacao = 2008;


    printf("--- Dados do Livro ---\n");
    printf("Titulo:             %s\n", meu_livro.titulo);
    printf("Autor:              %s\n", meu_livro.autor);
    printf("Editora:            %s\n", meu_livro.editora);
    printf("Ano de Publicacao:  %d\n", meu_livro.ano_publicacao);
    
    return 0;
}
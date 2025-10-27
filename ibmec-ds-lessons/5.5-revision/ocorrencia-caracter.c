/*  1) C.U.F. denominada strchr(s,c) que devolve o endereço da primeira ocorrência do caracter c na string s
 ou, então, o valor NULL caso esse caracter não seja encontrado*/

#include <stdio.h>
char* strchr(char *s,char c)
{
    int i;
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == c)
        {
            return &s[i];
        }
    }
    return NULL;
}

int main ()
{
    char s[50], c;
    c = 'c';

    printf("Digite uma string: ");
    scanf("%s", s);

    char* target = strchr(s,c);
    if (target == NULL)
    {
        printf("Caractere não encontrado.\n");
    }
    else
    {
        printf("Caractere encontrado na posição: %ld\n", target - s);
    }
   return 0;
}
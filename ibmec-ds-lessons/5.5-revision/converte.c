/*C.U.F. denominada monet(v) que recebe um valor real e devolve uma string com a representação
monetária desse valor. Por exemplo, a chamada monet(1234.56) deve devolver "R$ 1.234,56" como
resposta*/

#include <stdio.h>
#include <string.h>

char *monet(double v)
{
    static char result[50];
    char temp[40];
    int len, i, j, count = 0;

    sprintf(temp, "%.2f", v);

    for (i = 0; temp[i] != '\0'; i++)
    {
        if (temp[i] == '.')
        {
            temp[i] = ',';
            break;
        }
    }

    int posVirgula = -1;
    for (i = 0; temp[i] != '\0'; i++)
    {
        if (temp[i] == ',')
        {
            posVirgula = i;
            break;
        }
    }

    char parteInteira[30];
    strncpy(parteInteira, temp, posVirgula);
    parteInteira[posVirgula] = '\0';

    char parteInvertida[40];
    len = strlen(parteInteira);
    j = 0;
    for (i = len - 1; i >= 0; i--)
    {
        parteInvertida[j++] = parteInteira[i];
        count++;
        if (count == 3 && i > 0)
        {
            parteInvertida[j++] = '.';
            count = 0;
        }
    }

    parteInvertida[j] = '\0';

    char parteFinal[40];
    len = strlen(parteInvertida);
    for (i = 0; i < len; i++)
    {
        parteFinal[i] = parteInvertida[len - 1 - i];
    }
    parteFinal[len] = '\0';

    sprintf(buf, "R$ %s%s", parteFinal, &temp[posVirgula]);

    return buf;
}

int main()
{
    double valor;
    printf("Digite um valor:");
    scanf("%lf", &valor);

    printf("%s\n", monet(valor));
    return 0;
}
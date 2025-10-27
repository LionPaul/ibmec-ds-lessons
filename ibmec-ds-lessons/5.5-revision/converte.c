 /*C.U.F. denominada monet(v) que recebe um valor real e devolve uma string com a representação
 monetária desse valor. Por exemplo, a chamada monet(1234.56) deve devolver "R$ 1.234,56" como
 resposta*/

 #include <stdio.h>
 #include <string.h>

 char*monet(double v)
 {
 static char result[50];
 char temp [40];
 int len, i, j, ount = 0;

 sprinttf(temp, "%.2f", v);

 for(i =0; temp[i] != '\0'; i++) {
    if(temp[i] == '.') {
        temp[i] = ',';
        break;
    }
 }
 int posVirgula = -1;
 for (i = 0; temp[i] != '\0'; i ++) {
    if (temp[i] == ',') {
        posVirgula = i;
        break;
    }
 }


 }
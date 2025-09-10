#include <stdio.h>

void main (void)
{
    int v = 0x4142;
    char *a;
    int *b;
    long *c;

    a = b =c = &v;

    printf("%c %x %lx", *a, *b, *c);
}
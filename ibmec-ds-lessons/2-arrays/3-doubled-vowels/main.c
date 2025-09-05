#include <stdio.h>

int main()
{
    char vow1[5] = {'a', 'e', 'i', 'o', 'u'}, vow2[10];
    int i, j = 0;

    for (i=0; i<5; i++)
    {
        vow2[j] = vow1[i];
        printf("%c\n", vow2[j]);
        j++;
        vow2[j] = vow1[i];
        printf("%c\n", vow2[j]); 
        j++;
    }
return 0;

}
#include "Include.h"

void zam(char c[], int n)
{
    int i;
    for (i = 1; i <= n; i++)
    {
        if ((c[i] == 'a') && ((c[i - 1] == ' ') || (c[i - 1] == '\'')))
            c[i] = 'A';
        if ((c[i] == 'e') && ((c[i - 1] == ' ') || (c[i - 1] == '\'')))
            c[i] = 'E';
        if ((c[i] == 'i') && ((c[i - 1] == ' ') || (c[i - 1] == '\'')))
            c[i] = 'I';
        if ((c[i] == 'o') && ((c[i - 1] == ' ') || (c[i - 1] == '\'')))
            c[i] = 'O';
        if ((c[i] == 'u') && ((c[i - 1] == ' ') || (c[i - 1] == '\'')))
            c[i] = 'U';
        if ((c[i] == 'y') && ((c[i - 1] == ' ') || (c[i - 1] == '\'')))
            c[i] = 'Y';
    }
}
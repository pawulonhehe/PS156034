#include <stdio.h>
#include <stdlib.h>

int **foo(int n)
{
    int **tab = malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++)
    {
        *(tab + i) = malloc(n * sizeof(int[n]));
    }
    return tab;
}

int suma(int **tab, int n)
{
    int wynik = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            for (int k = 0; k < n; k++)
                wynik += *(*(tab + i) + j) + k;
    }
    return wynik;
}

int main()
{
    int n = 100;
    int **tab = foo(n);
    printf("%d", suma(tab, n));
    return 0;
}
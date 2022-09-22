#include "generator.h"
#include <stdio.h>
#include <stdlib.h> // Pour pouvoir utiliser EXIT_SUCCESS

int main(int argc, char **argv)
{
    int n = argc > 1 ? atoi(argv[1]) : 0; // atoi: ascii to integer

    printf("la suite de %d nombre(s): ", n);
    while (n--)
    {
        printf("%d, ", generate());
    }
    printf("\n");
    return EXIT_SUCCESS;
}
// #include "generator.h" on appelle la methode generate du module generate. pas la peine de l'inclure
#include "suite.h"
#include <stdio.h>
#include <stdlib.h> // Pour pouvoir utiliser EXIT_SUCCESS

int main(int argc, char **argv)
{
    int n = argc > 1 ? atoi(argv[1]) : 0; // atoi: ascii to integer

    printf("des suites de symbole(s): :\n");
    while (n-- > 0)
    {
        suite_e_suite(n);
    }
    printf("\n");
    return EXIT_SUCCESS;
}

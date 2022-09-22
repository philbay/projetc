#include <stdio.h>
#include "suite.h"
#include "generator.h"

// Adapter ce module à la nouvelle version du générateur d'entiers

void suite_e_suite(int longueur)
{

    generator_generate(Debut);
    printf("(");
    while (longueur-- >= 0)
    {
        printf("%d , ", generator_generate(Suivant));
    }
    printf(")");
}

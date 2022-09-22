#include "generator.h"
#define INITIAL_VALUE 1 // macro-constante ou constante, c'est une directive. une instruction pour le micro-processeur
#include <stdio.h>
int generator_generate(message m) // on met le nom du module devant la methode ici generator_
{
    // val est une v.l de classe statique
    static int val = INITIAL_VALUE; //

    switch (m)
    {
    case Debut:
        val = INITIAL_VALUE;
        return 0;
    case Suivant:
        return val++;
    default:
        printf("problemo");
        break;
    }
    return 0;
}
#include "generator.h"
#define INITIAL_VALUE 0 // macro-constante ou constante, c'est une directive. une instruction pour le micro-processeur
int generate(void)
{
    // val est une v.l de classe statique
    static int val = INITIAL_VALUE; //
    return val++;
}
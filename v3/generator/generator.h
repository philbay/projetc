#ifndef GENERATOR_H
#define GENERATOR_H

enum message
{
    Debut,
    Suivant
};

typedef enum message message;

extern int generator_generate(message m); // prototype , N.B: on devrait normalement mettre le nom du module devant generate: generator_generate

#endif
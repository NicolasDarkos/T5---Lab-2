#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"
#include "cursos.h"

typedef struct no
{
    Cursos *curso;
    No *esq;
    No *dir;
} No;

typedef struct arvore
{
    No *raiz;
} Arvore;
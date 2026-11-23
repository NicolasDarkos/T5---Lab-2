#include <stdio.h>
#include <stdlib.h>
#include "cursos.h"

typedef struct alunos
{
    int matricula;
    char nome[50];
    int ano_ingresso;
} Alunos;

typedef struct cursos
{
    int codigo;
    char nome[50];
    char centro[50];
    Alunos *alunos;
} Cursos;

#ifndef RUSH_H
#define RUSH_H
#define MAX_WORD_SIZE 10 //pode ser depois alterado para utilizar memŕoia dinâmica

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct dict_struct  //Structure para salvar as entradas no ficheiro .dict
{
    char *dictKey;
    char dictWord[MAX_WORD_SIZE];
}dict;

void fillStruct(dict dictReceive);

#endif

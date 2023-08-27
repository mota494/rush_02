#include "rush.h"

void fillStruct(dict dictReceive) //Utilizar esta função para guardar a informação do ficheiro numa estrutura ??? talvez dê assim
{
    char *line;
    char test;
    FILE *file = fopen("numbers.dict", "r");

    if (file == NULL)
    {
        write(1, "The file does not exist or it's empty", 38);
        exit (0);
    }
}
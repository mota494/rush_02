#include "rush.h"

void fillStruct(t_entry *dict) //Utilizar esta função para guardar a informação do ficheiro numa estrutura ??? talvez dê assim
{
    FILE *fd = fopen("teste.txt", "r");

    if (fd == NULL)
    {
        write(1, "The file does not exist or it's empty", 38);
        exit (0);
    }
	(void)dict;
}
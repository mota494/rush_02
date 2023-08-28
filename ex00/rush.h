
#ifndef RUSH_H
#define RUSH_H

# ifndef BUFF_SIZE
# define BUFF_SIZE 10 // Tamanho para os buffers se não definido em compilação com a flag -d
# endif

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

typedef struct s_entry  //Structure para salvar as entradas no ficheiro .dict
{
    int num;
    char *word;
}	t_entry;

void fillStruct(t_entry *dict);

#endif

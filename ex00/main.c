#include "rush.h"

int main(int argc, char **argv) {
  t_entry *dictReceive = (t_entry *)malloc(sizeof(t_entry));
  dictReceive->num = 10;
  dictReceive->word = "word";

  fillStruct(dictReceive);
  write(1, "Teste\n", 6);
  (void)argc;
  (void)argv;
  return (0);
}
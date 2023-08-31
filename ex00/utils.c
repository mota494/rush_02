#include "rush.h"

void fillStruct(t_entry *dict) {
  int fd;
  char c;
  char num[38];
  int index;
  int a;

  index = 0;
  a = 0;
  fd = open("numbers.dict", O_RDONLY);
  if (fd < 0) {
    write(1, "The file does not exist or it's empty", 38);
    exit(0);
  }
  while(read(fd, &c, 1) == 1){ 
  }
}
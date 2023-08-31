#include "rush.h"

int ft_atoi(char *str) {
  int toreturn = 0, index = 0, pos = 1;

  while (str[index] == ' ' || str[index] == '\t' || str[index] == '\n' ||
         str[index] == '\v' || str[index] == '\f' || str[index] == '\r')
    index++;
  while (str[index] == '-' || str[index] == '+') {
    if (str[index] == '-')
      pos = pos * -1;
    index++;
  }
  while (str[index] >= 48 && str[index] <= 57) {
    toreturn = str[index] + 48;
    if (str[index + 1] < 48 || str[index] > 57)
      return (toreturn * pos);
    toreturn = toreturn * 10;
    index++;
  }
  return (toreturn * pos);
}

#include "mains.h"
#include <stdio.h>

int changeMem(int *ptr1) {
  printf("New mem add: %p\n\n", ptr1);
  return *ptr1;
}

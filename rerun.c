#include "mains.h"
#include <stdio.h>
#include <stdlib.h>

int rerunFunc(int *ptr1) {
  char accept;
  printf("Want to run the program again? (Y/n)\n");
  printf("> ");
  scanf(" %s", &accept);

  if (accept == 'Y' || accept == 'y') {
    main2(ptr1);
  } else if (accept == 'N' || accept == 'n') {
    exit(0);
  } else {
    printf("Invalid\n\n");
    rerunFunc(ptr1);
  }
  return *ptr1;
}

#include "optionsPick.h"
#include <stdbool.h>
#include <stdio.h>

// Include a feature that gives the size of the piece of info given.

int main(void) {
  int *ptr1 = NULL;

  char options;
  printf("\n[C]hange | [P]rev | [G]ive\n");
  printf("> ");
  scanf(" %s", &options);

  optionsToChoose(options, ptr1);
  printf("%p", ptr1);
  return 0;
}

int main2(int *ptr1) {
  char options;
  printf("\n[C]hange | [P]rev | [G]ive new\n");
  printf("> ");
  scanf(" %s", &options);
  optionsToChoose(options, ptr1);
  printf("%p", ptr1);
  return *ptr1;
}

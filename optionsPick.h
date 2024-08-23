#include "logsForMem.h"
#include "mains.h"
#include "memoryChange.h"
#include "optionGive.h"
#include "reruns.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int optionsToChoose(char options, int *ptr1) {
  int input;
  if (options == 'C' || options == 'c') {
    if (ptr1 == NULL) {
      printf("Seg fault. Give first.");
      main();
    } else {
      printf("Option chosen [change mem add].\n\n> ");
      scanf("%d", &input);
      ptr1 = &input;
      changeMem(ptr1);
      rerunFunc(ptr1);
    }
  } else if (options == 'P' || options == 'p') {
    printf("Option chosen [List mems].\n\n");
    logger(ptr1);
    main2(ptr1);
  } else if (options == 'G' || options == 'g') {
    printf("Option chosen [Give mem]\n\n> ");
    scanf("%d", &input);
    ptr1 = &input;
    getPointer(ptr1);
    rerunFunc(ptr1);
  } else {
    printf("No option choosen.\nPossibly wrong option?\n\n");
    printf("Retry? (Y/n)\n> ");
    char accept;
    scanf(" %s", &accept);
    if (accept == 'Y' || accept == 'y') {
      main2(ptr1);
    } else if (accept == 'N' || accept == 'n') {
      printf("\nExiting...\n\n");
      exit(0);
    } else {
      printf("No option picked. Exiting...\n");
      exit(0);
    }
  }
  return *ptr1;
}

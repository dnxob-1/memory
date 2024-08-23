#include "mains.h"
#include <stdio.h>
#include <stdlib.h>

int logger(int *ptr1) {
  if (ptr1 == NULL) {
    printf("Seg Fault. Give first.\n\n");
    main();
  } else {
    printf("Ptr1 is at %p with a value of %d\n\n", ptr1, *ptr1);
  }
  return *ptr1;
}

#include <assert.h>
#include <stdlib.h>
#include <stdnoreturn.h>

int* malloc_no_check_bad() {
  int* p = (int*)malloc(sizeof(int));
  *p = 42;
  return p;
}

void main() {
   malloc_no_check_bad();
}
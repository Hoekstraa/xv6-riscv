#include "kernel/types.h"
#include "user/user.h"

int
main(void)
{
  printf("%d\n", unusedMemory());
  printf("Now let's malloc.\n");
  void* mem = malloc(500);
  printf("%d\n", unusedMemory());
  free(mem);
  printf("And freeing the mem again:\n");
  printf("%d\n", unusedMemory());
  exit(0);
}

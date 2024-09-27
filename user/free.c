#include "kernel/types.h"
#include "user/user.h"

int
main(void)
{
  printf("%d\n", kfreepages());
  printf("Now let's malloc.\n");
  void* mem = malloc(500);
  printf("%d\n", kfreepages());
  free(mem);
  printf("And freeing the mem again:\n");
  printf("%d\n", kfreepages());
  exit(0);
}

#include "kernel/types.h"
#include "user/user.h"

int main(void) {
  fprintf(1, "Hello XV6!\n");
  hello();
  exit(0);
}

#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"
#include "kernel/fs.h"
#include "kernel/fcntl.h"

int
main(int argc, char* argv[]) {
  if (argc != 2)
  {
    exit(1);
  }

  int seconds = atoi(argv[1]);
  sleep(seconds);
}

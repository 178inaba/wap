#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "_cgo_export.h"

void wap(void) {
  srand(time(NULL));
  int w = 0, n = 0;

  for (;;) {
    n++;

    int s = printWord(rand() % 4);

    if (w != s) {
      if (s == 0) {
        w = 1;
      } else {
        w = 0;
      }
    } else {
      w++;
      if (w == 4) {
        break;
      }
    }
  }

  printf("%s",
         "\n"
         "＿人人人人人人人＿\n"
         "＞進捗どうですか＜\n"
         "￣Y^Y^Y^Y^Y^Y^Y￣\n");
  printf("%d回で煽られました\n", n);
}

// Используя директиву #define, как можно описать именованную константу,
// которая возвращает число секунд в году? Високосными годами следует пренебречь
#include <stdio.h>

#define SECONDS_PER_YEAR (60UL * 60UL * 24UL * 365UL)

int main(int argc, char const *argv[]) {
  printf("Количество секунд в году: %lu\n", SECONDS_PER_YEAR);
  return 0;
}
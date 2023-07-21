#include <stdio.h>
#include <time.h>

typedef struct {
  u_int8_t Second;
  u_int8_t Minute;
  u_int8_t Hour;
  char Zone;
  u_int8_t Day;
  u_int8_t WeekDay;
  u_int8_t Month;
  u_int8_t Year;
} TimeDate_t;

void getLocaleDateTime(TimeDate_t *timeDate);

int main(void) {
  TimeDate_t timeDate;

  getLocaleDateTime(&timeDate);
}

void getLocaleDateTime(TimeDate_t *timeDate) {
  time_t t = time(NULL);
  struct tm *now = localtime(&t);

  timeDate->Second = now->tm_sec;
  timeDate->Minute = now->tm_min;
  timeDate->Hour = now->tm_hour;
  timeDate->Zone = *(now->tm_zone);
  timeDate->Day = now->tm_mday;
  timeDate->WeekDay = now->tm_wday;
  timeDate->Month = now->tm_mon + 1;
  timeDate->Year = now->tm_year - 100;
}
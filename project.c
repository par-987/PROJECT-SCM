#include<stdio.h>
#include<stdlib.h>
int get_1st_Weekday(int year){
    int d;
    d = (((year - 1) * 365) + ((year - 1) / 4) - ((year - 1) / 100) + ((year) / 400) + 1) % 7;
  return d;
}

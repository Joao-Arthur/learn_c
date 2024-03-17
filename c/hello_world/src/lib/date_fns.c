#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "date_fns.h"

void printDate(const struct PlainDate *date) {
    if (date->year == 0) {
        fprintf(stderr, "Invalid year!\n");
        return;
    }
    if (date->month < 1 || date->month > 12) {
        fprintf(stderr, "Invalid month!\n");
        return;
    }
    if (date->day < 1 || date->day > 31) {
        fprintf(stderr, "Invalid day!\n");
        return;
    }
    printf("This was written on: %d-%02d-%02d\n", date->year, date->month, date->day);
}

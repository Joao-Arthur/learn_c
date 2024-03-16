#include <stdio.h>
#include <stdlib.h>

void printDate(int year, int month, int day) {
    if (day < 1 || day > 31) {
        fprintf(stderr, "Invalid day!\n");
        return;
    }
    if (month < 1 || month > 12) {
        fprintf(stderr, "Invalid month!\n");
        return;
    }
    if (year == 0) {
        fprintf(stderr, "Invalid year!\n");
        return;
    }
    printf("%i-%i-%i\n", year, month, day);
}

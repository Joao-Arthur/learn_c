#ifndef _DATE_FNS_
#define _DATE_FNS_
 
struct PlainDate {
    int year;
    int month;
    int day;
};

void printDate(const struct PlainDate *date);
 
#endif

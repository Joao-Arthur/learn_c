#include <stdio.h>
#include "lib/date_fns.h"
#include "lib/greetings_fns.h"

//int argc, char *argv[]
int main() {
    printGreetings();
    struct PlainDate today = {
        .year = 2024,
        .month = 3,
        .day = 16,
    };
    printDate(&today);
    printGreetingsFor("João Arthur");
    printf("I am learning the C programming language :)\n");
    return 0;
}

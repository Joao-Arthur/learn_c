#include <stdio.h>
#include "lib/date_fns.hpp"
#include "lib/greetings_fns.hpp"

//int argc, char *argv[]
int main() {
    printGreetings();
    struct PlainDate today = {
        2024,
        3,
        16,
    };
    printDate(&today);
    printGreetingsFor("João Arthur");
    printf("I am learning the C++ programming language :)\n");
    return 0;
}

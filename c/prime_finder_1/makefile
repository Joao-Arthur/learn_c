BUILD_FLAGS = -std=c18 -W -Wall -Wextra -Werror -pedantic -O3
DEBUG_FLASG = -std=c18 -W -Wall -Wextra -Werror -pedantic -g -ggdb -fsanitize=address -fno-omit-frame-pointer

all: build

before:
	mkdir --parents dist

build: before
	gcc $(BUILD_FLAGS) ./src/main.c -o ./dist/primeFinder

debug: before
	gcc $(DEBUG_FLASG) ./src/main.c -o ./dist/primeFinder

clean:
	rm -rf --preserve-root ./dist

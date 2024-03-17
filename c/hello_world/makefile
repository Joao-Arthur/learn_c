BUILD_FLAGS = -std=c18 -W -Wall -Wextra -Werror -pedantic -O3
DEBUG_FLASG = -std=c18 -W -Wall -Wextra -Werror -pedantic -g -ggdb -fsanitize=address -fno-omit-frame-pointer

all: build

before:
	mkdir --parents dist

build: before
	gcc $(BUILD_FLAGS) ./src/*.c ./src/**/*.c -o ./dist/helloWorld

debug: before
	gcc $(DEBUG_FLASG) ./src/*.c ./src/**/*.c -o ./dist/helloWorldDebug

clean:
	rm -rf --preserve-root ./dist

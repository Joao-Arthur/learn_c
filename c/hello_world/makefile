BUILD_FLAGS = -std=c18 -W -Wall -Wextra -Werror -pedantic -O3
DEBUG_FLASG = -std=c18 -W -Wall -Wextra -Werror -pedantic -g -ggdb -fsanitize=address -fno-omit-frame-pointer

all: build

before:
	mkdir --parents dist

build: before
	gcc $(BUILD_FLAGS) ./*.c ./**/*.c -o ./dist/helloWorld

debug: before
	gcc $(DEBUG_FLASG) ./*.c ./**/*.c -o ./dist/helloWorldDebug

clean:
	rm -rf --preserve-root ./dist

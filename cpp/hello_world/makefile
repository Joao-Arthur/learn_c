BUILD_FLAGS = -std=c++17 -W -Wall -Wextra -Werror -pedantic -O3
DEBUG_FLASG = -std=c++17 -W -Wall -Wextra -Werror -pedantic -g -ggdb -fsanitize=address -fno-omit-frame-pointer

all: build

before:
	mkdir --parents dist

build: before
	g++ $(BUILD_FLAGS) ./*.cpp ./**/*.cpp -o ./dist/helloWorld

debug: before
	g++ $(DEBUG_FLASG) ./*.cpp ./**/*.cpp -o ./dist/helloWorldDebug

clean:
	rm -rf --preserve-root ./dist

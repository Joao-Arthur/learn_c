# Hello world!

## Before Build

```bash
mkdir dist
```

## Final Build 

```bash
g++ -std=c++17 -W -Wall -Wextra -Werror -pedantic -O3 ./main.cpp -o ./dist/helloWorld
```

then

```bash
./dist/helloWorld
```

## Debug Build

```bash
g++ -std=c++17 -g -ggdb -fsanitize=address -fno-omit-frame-pointer -W -Wall -Wextra -Werror -pedantic ./main.cpp -o ./dist/helloWorldDebug
```

then

```bash
./dist/helloWorldDebug
```

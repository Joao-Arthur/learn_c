# Hello world!

## Before Build

```bash
mkdir dist
```

## Final Build 

```bash
gcc -std=c18 -W -Wall -Wextra -Werror -pedantic -O3 ./**/*.c -o ./dist/helloWorld
```

then

```bash
./dist/helloWorld
```

## Debug Build

```bash
gcc -std=c18 -g -ggdb -fsanitize=address -fno-omit-frame-pointer -W -Wall -Wextra -Werror -pedantic ./**/*.c -o ./dist/helloWorldDebug
```

then

```bash
./dist/helloWorldDebug
```

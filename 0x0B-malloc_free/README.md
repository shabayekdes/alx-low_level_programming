# 0x0B. C - malloc, free

- Task 0. Float like a butterfly, sting like a bee

```bash
cd tests
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c ../0-create_array.c -o a
./a
```

- Task 1. The woman who has no imagination has no wings

```bash
cd tests
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c ../1-strdup.c -o s
./s
```

- Task 2. He who is not courageous enough to take risks will accomplish nothing in life

```bash
cd tests
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c ../2-str_concat.c -o c
./c
```

- Task 3. If you even dream of beating me you'd better wake up and apologize

```bash
cd tests
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c ../3-alloc_grid.c -o g
./g
```

- Task 4. It's not bragging if you can back it up

```bash
cd tests
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c ../4-free_grid.c ../3-alloc_grid.c -o f
valgrind ./f
```

- Task 5. It isn't the mountains ahead to climb that wear you out; it's the pebble in your shoe

```bash
cd tests
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c ../100-argstostr.c -o args
./args I will "show you" how great I am
```

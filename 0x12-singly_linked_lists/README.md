# 0x12. C - Singly linked lists

- Task 0. Print list

```bash
cd tests
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c ../0-print_list.c -o a
./a
```

- Task 1. List length

```bash
cd tests
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c ../1-list_len.c -o b
./b
```

- Task 2. Add node

```bash
cd tests
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c ../2-add_node.c ../0-print_list.c -o c
./c
```

- Task 3. Add node at the end

```bash
cd tests
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c ../3-add_node_end.c ../0-print_list.c -o d
./d
```

- Task 4. Free list

```bash
cd tests
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c ../4-free_list.c ../3-add_node_end.c ../0-print_list.c -o e
valgrind ./e
```

- Task 5. The Hare and the Tortoise

```bash
cd tests
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c ../100-first.c -o f
./f
```

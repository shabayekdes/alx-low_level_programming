# 0x13. C - More singly linked lists

- Task 0. Print list

```bash
cd tests
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c ../0-print_listint.c -o a
./a
```

- Task 1. List length

```bash
cd tests
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c ../1-listint_len.c -o b
./b
```

- Task 2. Add node

```bash
cd tests
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c ../2-add_nodeint.c ../0-print_listint.c -o c
./c
```

- Task 3. Add node at the end

```bash
cd tests
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c ../3-add_nodeint_end.c ../0-print_listint.c -o d
./d
```

- Task 4. Free list

```bash
cd tests
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c ../4-free_listint.c ../3-add_nodeint_end.c ../0-print_listint.c -o e
valgrind ./e
```

- Task 5. Free

```bash
cd tests
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c ../5-free_listint2.c ../3-add_nodeint_end.c ../0-print_listint.c -o f
valgrind ./f
```

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

- Task 6. Pop

```bash
cd tests
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 6-main.c ../6-pop_listint.c ../3-add_nodeint_end.c ../0-print_listint.c -o g
valgrind ./g
```

- Task 7. Get node at index

```bash
cd tests
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 7-main.c ../7-get_nodeint.c ../3-add_nodeint_end.c ../0-print_listint.c -o h
./h
```

- Task 8. Sum list

```bash
cd tests
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-main.c ../8-sum_listint.c ../3-add_nodeint_end.c ../0-print_listint.c -o i
./i
```

- Task 9. Insert

```bash
cd tests
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-main.c ../9-insert_nodeint.c ../0-print_listint.c ../1-listint_len.c ../3-add_nodeint_end.c ../5-free_listint2.c -o j
./j
```

- Task 10. Delete at index

```bash
cd tests
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 10-main.c ../10-delete_nodeint.c ../0-print_listint.c ../1-listint_len.c ../3-add_nodeint_end.c ../5-free_listint2.c -o k
./k
```

- Task 11. Reverse list

```bash
cd tests
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c ../100-reverse_listint.c ../0-print_listint.c ../1-listint_len.c ../3-add_nodeint_end.c ../5-free_listint2.c -o l
./l
```

- Task 12. Print (safe version)

```bash
cd tests
 cc -Wall -pedantic -Werror -Wextra -std=gnu89 101-main.c ../2-add_nodeint.c ../101-print_listint_safe.c -o m
./m
```

- Task 13. Free (safe version)

```bash
cd tests
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 102-main.c ../2-add_nodeint.c ../101-print_listint_safe.c ../102-free_listint_safe.c -o n
./n
```

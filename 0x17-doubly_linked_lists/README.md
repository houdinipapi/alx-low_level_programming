## 0x17. C - Doubly linked lists
### Resources
**Read or watch:**
- [What is a Doubly Linked list](https://intranet.alxswe.com/rltoken/C5_IRM981SVn8oA8RP3gag)
### More Infor
Please use this data structure for this project:
```
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * 
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;
```

## Tasks
### 0. Print list
- `0-print_dlistint.c` - a function that prints all the elements of a `dlistint_t` list.
### 1. List length
- `1-dlistint_len.c` - a function that returns the number of elements in a linked `dlistint_t` list.
### 2. Add node
- `2-add_dnodeint.c` - a function that adds a new node at the beginning of a `dlistint_t` list.
### 3. Add node at the end
- `3-add_dnodeint_end.c` - a function that adds a new node at the end of a `dlistint_t` list.
### 4. Free list
- `4-free_dlistint.c` - a function that frees a `dlistint_t` list.
### 5. Get node at index
- `5-get_dnodeint.c` - a function that returns the nth node of a `dlistint_t` linked list.
### 6. Sum list
- `6-sum_dlistint.c` - a function that returns the sum of all the data (n) of a `dlistint_t` linked list.
### 7. Insert at index
- `7-insert_dnodeint.c` - a function that inserts a new node at a given position.
### 8. Delete at index
- `8-delete_dnodeint.c` - a function that deletes the node at index `index` of a `dlistint_t` linked list.
### 9. Crackme4
- `100-password` - Find the password for [crackme4](https://github.com/holbertonschool/0x17.c).
### 10. Palindromes
- `102-result` - Find the largest palindrome made from the product of two 3-digit numbers.
### 11. crackme5
- `103-keygen.c` - a keygen for [crackme5](https://github.com/holbertonschool/0x17.c).

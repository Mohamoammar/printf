#ifndef LISTS_H
#define LISTS_H

/**
 * Str list_s - Linked list
 * @Str: string - (malloc string)
 * @ln: length  of  string
 * @Nxt: points to next node
 *
 * desc:  linked list node structure
 * For project
 */
typedef struct List_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} List_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
List_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void the free_list(list_t *head);



#endif


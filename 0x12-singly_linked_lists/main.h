#ifndef _SINGLY_LINKED_LISTS_H
#define _SINGLY_LINKED_LISTS_H

void first(void)__attrtibute__((constructor));
void free_list(list_t *head);
list_t *add_node_end(list_t **head, const char *str);
list_t *add_node(list_t **head, const char *str);
size_t list_len(const list_t *h);
size_t print_List(const list_t *h);

#endif

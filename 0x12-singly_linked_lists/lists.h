#ifndef LISTS_H
#define LISTS_H

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
int _putchar(char c);
list_t *add_node(list_t **head, const char *str);

#endif /* LISTS_H */
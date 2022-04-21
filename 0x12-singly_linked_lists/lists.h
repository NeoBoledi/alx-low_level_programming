#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
int _putchar(char c);
/**
 * struct list_s - struct list
 * @str: string
 * @len: length
 * @next: pointer
 * Return: Always 0.
 */
typedef struct list_s
{
char *str;
unsigned int len;
struct list_s *next;
} list_t;
char *create_array(unsigned int size, char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
int _strlen(const char *);
void free_list(list_t *head);
#endif

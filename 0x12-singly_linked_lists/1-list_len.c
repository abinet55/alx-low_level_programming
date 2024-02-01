#include "lists.h"

/**
* list_len - the number of elements
* @h: singly linked list
* Return: number of elements
*/

size_t list_len(const list_t *h)
{
size_t element = 0;
while (h != NULL)
{
h = h->next;
element++;
}
return (element);
}

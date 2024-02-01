#include "lists.h"

/**
* free_list - frees a list
* @head: head of linked list
* Return: nothing
*/

void free_list(list_t *head)
{
list_t *latest;
while ((latest = head) != NULL)
{
head = head->next;
free(latest->str);
free(latest);
}
}

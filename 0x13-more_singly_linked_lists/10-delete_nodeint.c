#include "lists.h"

/**
* delete_nodeint_at_index - deletes the node
* @head: head of a list
* @index: index of where the node is deleted
* Return: 1 or -1
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int x;
listint_t *prev;
listint_t *next;
prev = *head;
if (index != 0)
{
for (x = 0; x < index - 1 && prev != NULL; x++)
{
prev = prev->next;
}
}
if (prev == NULL || (prev->next == NULL && index != 0))
{
return (-1);
}
next = prev->next;
if (index != 0)
{
prev->next = next->next;
free(next);
}
else
{
free(prev);
*head = next;
}
return (1);
}

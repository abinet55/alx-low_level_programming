#include "lists.h"

/**
* add_node_end - adds a new node
* @head: head of the linked list
* @str: string in the list.
* Return: address of head
*/

list_t *add_node_end(list_t **head, const char *str)
{
list_t *newer, *temp;
size_t nochar;
newer = malloc(sizeof(list_t));
if (newer == NULL)
return (NULL);
newer->str = strdup(str);
for (nochar = 0; str[nochar]; nochar++)
;
newer->len = nochar;
newer->next = NULL;
temp = *head;
if (temp == NULL)
{
*head = newer;
}
else
{
while (temp->next != NULL)
temp = temp->next;
temp->next = newer;
}
return (*head);
}

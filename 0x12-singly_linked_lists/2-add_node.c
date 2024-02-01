#include "lists.h"
/**
* add_node - adds a new node
* @head: head of the linked list
* @str: string to store in the list
* Return: address head.
*/

list_t *add_node(list_t **head, const char *str)
{
list_t *newer;
size_t nochar;
newer = malloc(sizeof(list_t));
if (newer == NULL)
return (NULL);
newer->str = strdup(str);
for (nochar = 0; str[nochar]; nochar++)
;
newer->len = nochar;
newer->next = *head;
*head = newer;
return (*head);
}

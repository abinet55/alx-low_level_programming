#include "lists.h"

/**
* add_nodeint_end - add a new node at the end
* @head: head of a list
* @n: elements
* Return: address of the new element
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new;
listint_t *tempnode;
(void)tempnode;
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->next = NULL;
tempnode = *head;
if (*head == NULL)
{
*head = new;
}
else
{
while (tempnode->next != NULL)
{
tempnode = tempnode->next;
}
tempnode->next = new;
}
return (*head);
}

#include "lists.h"

/**
* add_dnodeint - adds a new node
* @head: head of the list
* @n: value of the element
* Return: address
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *h;
dlistint_t *new;
new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->prev = NULL;
h = *head;
if (h != NULL)
{
while (h->prev != NULL)
h = h->prev;
}
new->next = h;
if (h != NULL)
h->prev = new;
*head = new;
return (new);
}

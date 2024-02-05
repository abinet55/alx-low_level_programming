#include "lists.h"

/**
* pop_listint - deletes the head node
* @head: head of a list
* Return: head node
*/

int pop_listint(listint_t **head)
{
int headnode;
listint_t *h;
listint_t *current;
if (*head == NULL)
return (0);
current = *head;
headnode = current->n;
h = current->next;
free(current);
*head = h;
return (headnode);
}

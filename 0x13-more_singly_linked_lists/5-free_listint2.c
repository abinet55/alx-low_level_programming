#include "lists.h"

/**
* free_listint2 - free linked list
* @head: head of a list
* Return: nothing
*/

void free_listint2(listint_t **head)
{
listint_t *tempnode;
listint_t *current;
if (head != NULL)
{
current = *head;
while ((tempnode = current) != NULL)
{
current = current->next;
free(tempnode);
}
*head = NULL;
}
}

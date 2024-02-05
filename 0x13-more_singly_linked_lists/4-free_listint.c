#include "lists.h"

/**
* free_listint - free linked list
* @head: head of a list
* Return: nothing
*/

void free_listint(listint_t *head)
{
listint_t *tempnode;
while ((tempnode = head) != NULL)
{
head = head->next;
free(tempnode);
}
}

#include "lists.h"

/**
* reverse_listint - reverse a linked list
* @head: head of a list
* Return: pointer
*/

listint_t *reverse_listint(listint_t **head)
{
listint_t *pre;
listint_t *nex;
pre = NULL;
nex = NULL;
while (*head != NULL)
{
nex = (*head)->next;
(*head)->next = pre;
pre = *head;
*head = nex;
}
*head = pre;
return (*head);
}

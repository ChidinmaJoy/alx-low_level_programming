#include "lists.h"

/**
* free_listint2 - freee a lined list
* @head: head of a list.
*
* Return: nothing.
*/
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}
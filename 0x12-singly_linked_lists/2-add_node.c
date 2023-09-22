#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list
 *
 * @head: address of node
 * @str: string to add
 *
 * Return: the address of the new element, or NULL if it failed
 *
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;

	newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
		return (NULL);

	else
	{
		newnode->next = *head;
		newnode->str = strdup(str);
	}

	*head = newnode;
	return (newnode);
}

#include "lists.h"
/**
 * list_len - function that returns the number of
 * elements in a linked list_t list
 *
 * @h: string to list
 *
 * Return:  returns the number of elements in a linked list_t list8
 *
*/
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
		if (h != NULL)
			h = h->next;
		count++;
	}
	return (count);
}

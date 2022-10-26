#include "lists.h"

/**
  * get_nodeint_at_index - return nth node index
  * @head:poiter to node
  * @index:given index int
  * Return:NULL or index of node
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
size_t x;

for (x = 0; x < index && head->next; x++)
{
	head = head->next;
}
if (x < index)
	return (NULL);
return (head);
}

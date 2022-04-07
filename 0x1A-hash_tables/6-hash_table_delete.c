#include "hash_ttables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table to be deleted
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head;
	hash_node_t *node, *temp;
	unsigned long int count;

	head = ht;
	for (count = 0; count < ht->size; count++)
	{
		if (ht->array[count] != NULL)
		{
			node = ht->array[count];
			while (node != NULL)
			{
				tmp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = temp;
			}
		}
	}
	free(head->array);
	free(head);
}

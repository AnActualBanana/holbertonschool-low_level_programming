#include "hash_tables.h"
/**
 * hash_tale_create - creates a hash table.
 * @size: the size of the array of nodes.
 * Return: a pointer to the newly created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	table = malloc(1 * sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	table->size = size;
	return (table);
}

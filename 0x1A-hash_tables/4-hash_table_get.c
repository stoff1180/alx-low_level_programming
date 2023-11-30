#include "hash_tables.h"

/**
 * hash_table_get - Retrieves the value associated with key in a hash table.
 * @ht: pointer to the hash table.
 * @key: key to fined the value.
 * Return: If not key NULL, Otherwise with key in ht.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	temp = ht->array[index];
	while (temp && strcmp(temp->key, key) != 0)
		temp = temp->next;

	return ((temp == NULL) ? NULL : temp->value);
}

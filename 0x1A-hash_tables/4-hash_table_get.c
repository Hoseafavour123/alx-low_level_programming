#include "hash_tables.h"

/**
  * hash_table_get - Retrieves the value of a key from the hash table
  * @ht: The hash table
  * @key: key to look into
  *
  * Return: -The value (on success)
  *         -NULL if key cannot be found
  */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp;
	unsigned long int idx;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[idx];

	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}

	return (NULL);
}

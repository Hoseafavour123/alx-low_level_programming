#include "hash_tables.h"

/**
  * hash_table_set - Adds items to hash table or update existing ones
  * @ht: Hash table to manipulate
  * @key: key
  * @value: corresponding value
  *
  * Description: In case of a collision in this hash table, the Chaining
  * technique is used to add items to the beginning of the list
  *
  * Return: 1 if successful
  *			0 if failed
  */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	char *val_copy;
	hash_node_t *tmp, *new;

	if (ht == NULL || *key != '\0' || key == NULL || value == NULL)
		return (0);

	val_copy = strdup(value);
	if (val_copy == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[idx];

	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = val_copy;
			return (1);
		}
	}
	
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(val_copy);
		return (0);
	}
	
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = val_copy;
	new->next = ht->array[idx];
	ht->array[idx] = new;

	return (1);
}

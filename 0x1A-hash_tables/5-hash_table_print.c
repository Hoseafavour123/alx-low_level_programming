#include "hash_tables.h"

/**
  * hash_table_print - Prints the hash table
  * @ht: hash table to print
  *
  * Return: nothing
  * Description - The items are printed in the order they occur in the table
  */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	unsigned char comma = 0;
	hash_node_t *tmp;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			if (comma == 1)
				printf(", ");
			tmp = ht->array[i];
			while (tmp)
			{
				printf("'%s': '%s'", tmp->key, tmp->value);
				tmp = tmp->next;
				if (tmp)
					printf(", ");				
			}
			comma = 1;
		}
	}
	printf("}\n");
}

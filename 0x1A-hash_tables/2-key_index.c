#include "hash_tables.h"

/**
  * key_index - Computes the index at which a key/value pair is to be stored in
  * a hash table
  *
  * @key: key
  * @size: size of hash_table
  *
  * Return: The index of the key
  * Description: The djb2 algorithm is used to generate the hashes
  */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = (hash_djb2(key)) % size;

	return (index);
}

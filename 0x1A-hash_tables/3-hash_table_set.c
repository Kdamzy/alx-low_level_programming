#include "hash_tables.h"

/**
 * hash_table_set - Add an item to Hash table.
 * @ht: A pointer to the hash table.
 * @key: The key of the added item to the hash table.
 * @value: The pair value of the key.
 *
 * Return: On failure - 0, else - 1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *duplicate;
	unsigned long int i, index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	duplicate = strdup(value);
	if (duplicate == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = duplicate;
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(duplicate);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = duplicate;
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}

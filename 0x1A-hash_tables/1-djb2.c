#include "hash_tables.c"
/**
 * hash_djb2 - Hash function that implements the djb2 algorithm.
 * @str: the string to hash.
 * Return: the hash.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
unsigned long int hash;
int c;

hash = 5381;
while ((c = *str++))
{
hash = ((hash << 5) + hash)+c;
}
return (hash);
}

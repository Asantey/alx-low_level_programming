#include <main.h>

/**
 *  _strpbrk - bytes
 * @s: pointer to char
 * @accept: pointer to char
 * Return: NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	
		for (i = 0; s[i]; i++)
		{
			for (j=0; accept [j]; j++)
			{
			if (s[i] == accept[j])
				break;
			}
			if (accept[j])
                             return (s+i);
		}
		return (0);
}

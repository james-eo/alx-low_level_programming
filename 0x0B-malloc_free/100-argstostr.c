#include "main.h"

/**
 * argstostr - concartenates arguments
 * @ac: argument
 * @av: pointer argument
 * Return: pointer, null if arguments are 0 or null
 */

char *argstostr(int ac, char **av)
{
	char *arg;
	int count = 0, a = 0, b = 0, c = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	while (a < ac)
	{
		b = 0;

		while (av[a][b] != '\0')
		{
			count++;
			b++;
		}
		a++;
	}
	count += ac + 1;
	arg = malloc(sizeof(char) * count);
	if (arg == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			arg[c] = av[a][b];
			c++;
		}
		arg[c] = '\n';
		c++;
	}
	return (arg);
}

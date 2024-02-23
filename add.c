#include "shelllib.h"

int main(__attribute__((unused)) int ac, char **av)
{
	/*
	for (int i = 1; i < ac ; i++)
	{
		printf("%s\n", av[i]);
	}
	*/
	int i = 1;
	while (av[i] != NULL)
	{
		printf("%s\n", av[i]);
		i++;
	}

	return (0);

}

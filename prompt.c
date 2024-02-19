#include "shelllib.h"


char args[10][100];

int main()
{
	printf("$ ");
	char *input = NULL;
	size_t len = 0;
	ssize_t read;

	read = getline(&input, &len, stdin);
	if (read != -1) {
		sscanf(input, "%s", args[0]);
	
	}
	
	printf(input);
	

	free(input);
	/*the data in args[0] is the data given in the getline */

	return 0;
}

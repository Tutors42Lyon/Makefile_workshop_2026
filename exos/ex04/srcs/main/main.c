#include <stdio.h>
#include "exo.h"

int main(int ac, char **av) {
	int len_str;
	if (ac != 2) {
		printf("Error: Invalid nb of arguments\n");
		return (1);
	};
	print_hello();
	len_str = ft_strlen(av[1]);
	printf(" you have %d letters in the string '%s'\n", len_str, av[1]);
	return (0);
}

#include "comprobacion.h"

void	comTolower(void)
{
	char c, result;

	c = 'Z';
	result = ft_tolower(c);
	printf("tolower(%c) = %c\n", c, result);
	c = 'm';
	result = ft_tolower(c);
	printf("tolower(%c) = %c\n", c, result);
	c = '1';
	result = ft_tolower(c);
	printf("tolower(%c) = %c\n", c, result);
}

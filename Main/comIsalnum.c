
#include "comprobacion.h"

void	comIsalnum(void)
{
	char	c;
	int		result;

	c = '5';
	result = isalnum(c);
	printf("ORIGINAL %c: %d\n", c, result);
	result = ft_isalnum(c);
	printf("FUNCION %c: %d\n", c, result);
	c = 96;
	result = isalnum(c);
	printf("ORIGINAL %c: %d\n", c, result);
	result = ft_isalnum(c);
	printf("FUNCION %c: %d\n", c, result);
	c = 'l';
	result = isalnum(c);
	printf("ORIGINAL %c: %d\n", c, result);
	result = ft_isalnum(c);
	printf("FUNCION %c: %d\n", c, result);
	c = '+';
	result = isalnum(c);
	printf("ORIGINAL %c: %d\n", c, result);
	result = ft_isalnum(c);
	printf("FUNCION %c: %d\n", c, result);
}

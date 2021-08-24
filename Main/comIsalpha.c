
#include "comprobacion.h"

void	comIsalpha(void)
{
	char	c;

	c = '1';
	printf("\nOriginal: %d", isalpha(c));
	printf("\nFunción:  %d\n", ft_isalpha(c));
	c = 'q';
	printf("\nOriginal: %d", isalpha(c));
	printf("\nFunción:  %d\n", ft_isalpha(c));
	c = 0212;
	printf("\nOriginal: %d", isalpha(c));
	printf("\nFunción:  %d\n\n", ft_isalpha(c));
}

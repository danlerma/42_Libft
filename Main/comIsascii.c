#include "/Users/dlerma-c/Desktop/4200/Libft/libft.h"
#include "comprobacion.h"

void	comIsascii(void)
{
	char	c;

	c = 'n';
	printf("Original: %d", isascii(c));
	printf("\nFunción: %d", ft_isascii(c));
	c = '1';
	printf("\nOriginal: %d", isascii(c));
	printf("\nFunción: %d", ft_isascii(c));
	c = 0200;
	printf("\nOriginal %c: %d", c, isascii(c));
	printf("\nFunción: %d", ft_isascii(c));
}

#include "/Users/dlerma-c/Desktop/4200/Libft/libft.h"
#include "comprobacion.h"

void	comIsdigit(void)
{
	char	c;

	c = 's';
	printf("Original: %d", isdigit(c));
	printf("\nFunción: %d", ft_isdigit(c));
	c = 'q';
	printf("\nOriginal: %d", isdigit(c));
	printf("\nFunción: %d", ft_isdigit(c));
	c = 48;
	printf("\nOriginal: %d", isdigit(c));
	printf("\nFunción: %d", ft_isdigit(c));
}

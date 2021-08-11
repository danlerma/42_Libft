#include "/Users/dlerma-c/Desktop/4200/Libft/libft.h"
#include "comprobacion.h"

void	comToupper(void)
{
	char	c, result;

	c = 'a';
	result = ft_tolower(c);
	printf("tolower(%c) = %c\n", c, result);
	c = 100;
	result = ft_tolower(c);
	printf("tolower(%c) = %c\n", c, result);
	c = '\n';
	result = ft_tolower(c);
	printf("tolower(%c) = %c\n", c, result);
}

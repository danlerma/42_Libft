#include "/Users/dlerma-c/Desktop/4200/Libft/libft.h"
#include "comprobacion.h"

void	comStrlcpy(void)
{
	char	*dest;
	char	*src;
	char	c[]= "123456\0";
	char	c1[] = "abcdeefgh\0";
	unsigned int	num;

	dest = NULL;
	src = NULL;
	dest = c;
	src = c1;
	printf("ANTES:\ndst: %s\nsrc: %s\n", dest, src);
	num = ft_strlcpy(dest, src, 2);
	printf("DESPUES:\ndst: %s\nsrc: %s\n", dest, src);
}

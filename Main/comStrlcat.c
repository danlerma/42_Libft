
#include "comprobacion.h"

void	comStrlcat(void)
{
	char	c[]= "as\0destination buffer has size 1, but size argument is 5";
	char	c1[] = "1";
	char	c2[]= "as\0destination buffer has size 1, but size argument is 5";
	char	c3[] = "1";
	unsigned int	num;

	printf("\nOriginal\nANTES:\ndst: %s\nsrc: %s\n", c, c1);
	num = strlcat(c, c1, 0);
	printf("%d DESPUES:\ndst: %s\nsrc: %s\n\n", num, c, c1);
	printf("Funcion ANTES:\ndst: %s\nsrc: %s\n", c2, c3);
	num = ft_strlcat(c2, c3, 0);
	printf("%d DESPUES:\ndst: %s\nsrc: %s\n", num, c2, c3);
}

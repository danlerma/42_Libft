
#include "comprobacion.h"

void	comStrnstr(void)
{
	size_t	max = strlen("hola mundo");
	//char	*i1 = strnstr((void *)0), "fake", max);
	char	*i2 = ft_strnstr((void *)0, "fake", 3);

	//printf("\nOriginal (len = %zu): %s\n", max, i1);
	printf("\nFuncion  (len = %zu): %s\n", max, i2);
}

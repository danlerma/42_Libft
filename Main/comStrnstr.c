#include "/Users/dlerma-c/Desktop/4200/Libft/libft.h"
#include "comprobacion.h"

void	comStrnstr(void)
{
	size_t	max = strlen("hola mundo");
	char	*i1 = strnstr("hola mundo", "a", max);
	char	*i2 = ft_strnstr("hola mundo", "a", max);

	printf("\nOriginal (len = %zu): %s\n", max, i1);
	printf("\nFuncion  (len = %zu): %s\n", max, i2);
}

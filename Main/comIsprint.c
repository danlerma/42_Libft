#include "/Users/dlerma-c/Desktop/4200/Libft/libft.h"
#include "comprobacion.h"

void	comIsprint(void)
{
	char	c;

	c = 'Q';
	printf("ORIGINAL %c: %d\n", c, isprint(c));
	printf("FUNCION %c: %d\n", c, ft_isprint(c));
	c = 0200;
	printf("\nORIGINAL %c: %d\n", c, isprint(c));
	printf("FUNCION %c: %d\n", c, ft_isprint(c));
	c = '1';
	printf("\nORIGINAL %c: %d\n", c, isprint(c));
	printf("FUNCION %c: %d\n", c, ft_isprint(c));
	c = 0x80;
	printf("\nORIGINAL %c: %d\n", c, isprint(c));
	printf("FUNCION %c: %d\n", c, ft_isprint(c));
	c = 97;
	printf("\nORIGINAL %c: %d\n", c, isprint(c));
	printf("FUNCION %c: %d\n", c, ft_isprint(c));
	c = 0x78;
	printf("\nORIGINAL %c: %d\n", c, isprint(c));
	printf("FUNCION %c: %d\n", c, ft_isprint(c));
}

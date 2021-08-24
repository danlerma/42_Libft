
#include "comprobacion.h"

void	comBzero(void)
{
	char	*ptr = NULL;
	char	*ptr1 = NULL;
	char	str[11] = {"hola mundo\0"};
	char	str1[11] = {"hola mundo\0"};

	ptr = &str[0];
	ptr1 = &str1[0];
	bzero(str1 + 6, 1);
	printf("\nOriginal: %s\n", str1);
	ft_bzero(str + 6, 1);
	printf("Funcion:  %s\n", str);
}

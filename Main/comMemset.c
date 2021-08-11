#include "/Users/dlerma-c/Desktop/4200/Libft/libft.h"
#include "comprobacion.h"

void	comMemset(void)
{
	char	str1[] = "hola mundo";
	char	str2[] = "hola mundo";
	char	str3[] = "\0";
	char	str4[] = "\0";

	memset(str1, 'a', 4);
	printf("\nOriginal: %s\n", str1);
	ft_memset(str2, 'a', 4);
	printf("Funcion:  %s\n", str2);
	memset(str3, '.', 1);
	printf("\nOriginal: %s\n", str3);
	ft_memset(str4, '.', 4);
	printf("Funcion:  %s\n", str4);
}

#include "/Users/dlerma-c/Desktop/4200/Libft/libft.h"
#include "comprobacion.h"

void	comCalloc(void)
{
	char    *ptr;
	char    c[] = "Hola mundo";

	ptr = ft_calloc(10,sizeof(char));
	printf("Original: %s\n", ptr);
	ft_memcpy(ptr, c, sizeof(c));
	printf("Funcion:  %s", ptr);
}

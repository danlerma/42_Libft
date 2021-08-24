
#include "comprobacion.h"

void	comStrdup(void)
{
	char	str1[] = "Function first appeared in 4.4BSD.";
	char	str2[] = "Function first appeared in 4.4BSD.";

	printf("Original : %s\n", strdup(str1));
	printf("Funcion  : %s\n", ft_strdup(str2));
}

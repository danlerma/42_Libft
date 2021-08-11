#include "comprobacion.h"

void	comStrjoin(void)
{
	char	*c1 = "tripouille";
	char	*c2 = "42";

	printf("C1: %s\nC2: %s\n", c1, c2);
	printf("STR: %s\n", ft_strjoin(c1, c2));
}

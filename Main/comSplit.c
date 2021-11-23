#include "comprobacion.h"

void	comSplit(void)
{
	char	*str = NULL;
	char	**result;
	int		i;

	printf("\nSTR inicial ( ' ' ): %s\n\n", str);
	result = ft_split(str, 0);
	i = 0;
	while (result[i])
	{
		printf("STR %d: %s\n", i, result[i]);
		i++;
	}
}

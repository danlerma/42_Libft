#include "comprobacion.h"

void	comItoa(void)
{
	long	num;
	char	*numero;

	num = 0;
	printf("Nº int:  %ld\n", num);
	numero = ft_itoa(num);
	printf("Nº char: %s\n", numero);
}

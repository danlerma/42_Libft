
#include "comprobacion.h"

void	comAtoi(void)
{
	printf("ORIGINAL (9858985): %d\n", atoi("9858985"));
	printf("FUNCION  (9858985): %d\n\n", ft_atoi("9858985"));
	printf("ORIGINAL (-453665475): %d\n", atoi("-453665475"));
	printf("FUNCION  (-453665475): %d\n\n", ft_atoi("-453665475"));
	printf("ORIGINAL (-+5489): %d\n", atoi("-+5489"));
	printf("FUNCION  (-+5489): %d\n\n", ft_atoi("-+5489"));
	printf("ORIGINAL (-2147483648): %d\n", atoi("-2147483648"));
	printf("FUNCION  (-2147483648): %d\n\n", ft_atoi("-2147483648"));
	printf("ORIGINAL (+214748364832): %d\n", atoi("+214748364832"));
	printf("FUNCION  (+214748364832): %d\n\n", ft_atoi("+214748364832"));
	printf("ORIGINAL (0): %d\n", atoi("0"));
	printf("FUNCION  (0): %d\n\n", ft_atoi("0"));
	printf("ORIGINAL (98t890): %d\n", atoi("98t890"));
	printf("FUNCION  (98t890): %d\n\n", ft_atoi("98t890"));
	printf("ORIGINAL (-1): %d\n", atoi("-1"));
	printf("FUNCION  (-1): %d\n\n", ft_atoi("-1"));
	printf("ORIGINAL (99999999999999999999999999): %d\n", atoi("99999999999999999999999999"));
	printf("FUNCION  (99999999999999999999999999): %d\n\n", ft_atoi("99999999999999999999999999"));
}

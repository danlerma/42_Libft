
#include "comprobacion.h"

void	comMemmove(void)
{
	char str[] = "foo-barcelona";
	char str2[] = "foo-barcelona";

	memmove(&str[4], &str[3], 3);
	printf("\nOriginal: %s", str);
	ft_memmove(&str2[4], &str2[3], 3);
	printf("\nFuncion:  %s\n", str);
}

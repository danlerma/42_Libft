
#include "comprobacion.h"

void	comStrchr(void)
{
	const char	str[] = "?in the string po1inted.to by s";
	char		*ret;

	ret = strchr(str, 't');
	printf("ORIGINAL (t): %s\n", ret);
	ret = ft_strchr(str, 't');
	printf("FUNCION  (t): %s\n\n", ret);
	ret = strchr(str, '?');
	printf("ORIGINAL (?): %s\n", ret);
	ret = ft_strchr(str, '?');
	printf("FUNCION  (?): %s\n\n", ret);
	ret = strchr(str, '.');
	printf("ORIGINAL (.): %s\n", ret);
	ret = ft_strchr(str, '.');
	printf("FUNCION  (.): %s\n\n", ret);
	ret = strchr(str, 49);
	printf("ORIGINAL (1): %s\n", ret);
	ret = ft_strchr(str, 49);
	printf("FUNCION  (1): %s\n\n", ret);
	ret = strchr(str, 'w');
	printf("ORIGINAL (w): %s\n", ret);
	ret = ft_strchr(str, 'w');
	printf("FUNCION  (w): %s\n\n", ret);
}

#include "/Users/dlerma-c/Desktop/4200/Libft/libft.h"
#include "comprobacion.h"

void	comStrlen(void)
{
	char	a[20] = "Pro\ngñram";
	char	b[20] = {'P','r',48,'g','r','a','m','\0'};
	int		num;

	printf("Length of string a = %zu \n", strlen(a));
	num = ft_strlen(a);
	printf("Length of string a = %d \n", num);
	printf("Length of string b = %zu \n", strlen(b));
	num = ft_strlen(b);
	printf("Length of string a = %d \n", num);
}

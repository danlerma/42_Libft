#include "comprobacion.h"
#include <string.h>

void	comStrtrim(void)
{
	char	*str = "Matame camion";
	char	*set = "mawqo";
	char	*s1 = "   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n  ";

	printf("Cadena antes del trim (s = %s) : %s\n", set, str);
	printf("Cadeba despues del trim: %s\n\n", ft_strtrim(str, set));
	printf("Cadena antes del trim (s = %s) : %s\n", " \n\t", s1);
	printf("Cadeba despues del trim: %s\n\n", ft_strtrim(s1, " \n\t"));
}

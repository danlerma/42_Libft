#include "/Users/dlerma-c/Desktop/4200/Libft/libft.h"
#include "comprobacion.h"

int	main(int argc, char **argv)
{
	(void) argc;
	if (strcmp(argv[1], "isalpha") == 0)
		comIsalpha();
	else if (strcmp(argv[1], "isdigit") == 0)
		comIsdigit();
	else if (strcmp(argv[1], "isalnum") == 0)
		comIsalnum();
	else if (strcmp(argv[1], "isascii") == 0)
		comIsascii();
	else if (strcmp(argv[1], "isprint") == 0)
		comIsprint();
	else if (strcmp(argv[1], "strlen") == 0)
		comStrlen();
	else if (strcmp(argv[1], "memset") == 0)
		comMemset();
	else if (strcmp(argv[1], "bzero") == 0)
		comBzero();
	else if (strcmp(argv[1], "memcpy") == 0)
		comMemcpy();
	else if (strcmp(argv[1], "memmove") == 0)
		comMemmove();
	else if (strcmp(argv[1], "memset") == 0)
		comMemset();
	else if (strcmp(argv[1], "strlcpy") == 0)
		comStrlcpy();
	else if (strcmp(argv[1], "strlcat") == 0)
		comStrlcat();
	else if (strcmp(argv[1], "toupper") == 0)
		comToupper();
	else if (strcmp(argv[1], "tolower") == 0)
		comTolower();
	else if (strcmp(argv[1], "strchr") == 0)
		comStrchr();
	else if (strcmp(argv[1], "strrchr") == 0)
		comStrrchr();
	else if (strcmp(argv[1], "strncmp") == 0)
		comStrncmp();
	else if (strcmp(argv[1], "memchr") == 0)
		comMemchr();
	else if (strcmp(argv[1], "memcmp") == 0)
		comMemcmp();
	else if (strcmp(argv[1], "atoi") == 0)
		comAtoi();
	else if (strcmp(argv[1], "calloc") == 0)
		comCalloc();
	else if (strcmp(argv[1], "strdup") == 0)
		comStrdup();
	else if (strcmp(argv[1], "strnstr") == 0)
		comStrnstr();
	else if (strcmp(argv[1], "substr") == 0)
		comSubstr();
	else if (strcmp(argv[1], "strtrim") == 0)
		comStrtrim();
	else if (strcmp(argv[1], "split") == 0)
		comSplit();
	else if (strcmp(argv[1], "itoa") == 0)
		comItoa();
	else if (strcmp(argv[1], "strjoin") == 0)
		comStrjoin();
	return (0);
}

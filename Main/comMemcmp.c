#include "comprobacion.h"

void	comMemcmp(void)
{
	int n = 6;

	char str1[] = "Hello World!";
	char str2[] = "Hell1 World!";
	char str3[] = "Hell~ World!";
	char str5[] = {'H', 'e', 'l', 'l', 0, ' ', 'W', 'o', 'r', 'l', 'd', '!'};
	char str6[] = {'H', 'e', 'l', 'l', 0, ' ', '0', 'o', 'r', 'l', 'd', '!'};
	char str7[] = "Hello 0orld!";

	printf("INPUT (n = 6):\nStr 1: %s\nStr 2: %s\nOUTPUT (expected 0):\n%d\n", str1, str1, ft_memcmp(str1, str1, n));
	printf("INPUT (n = 6):\nStr 1: %s\nStr 2: %s\nOUTPUT (expected 62):\n%d\n", str1, str2, ft_memcmp(str1, str2, n));
	printf("INPUT (n = 6):\nStr 1: %s\nStr 2: %s\nOUTPUT (expected -15):\n%d\n", str1, str3, ft_memcmp(str1, str3, n));
	printf("INPUT (null char is the different char) (n = 6):\nStr 1: %s\nStr 2: Hell\\00 World!\nOUTPUT (expected 111):\n%d\n", str1, ft_memcmp(str1, str5, n));
	printf("INPUT (null char and different char after) (n = 6):\nStr 1: Hell\\00 World!\nStr 2: Hell\\00 0orld!\nOUTPUT (expected 0):\n%d\n", ft_memcmp(str5, str6, n));
	printf("INPUT (the different char is i = 7) (n = 6):\nStr 1: %s\nStr 2: %s\nOUTPUT (expected 0):\n%d\n", str1, str7, ft_memcmp(str1, str7, n));

	printf("\nOriginal (n = %d): %d\n", n, memcmp("\xff\xaa\xde\xffMACOSX\xff", "\xff\xaa\xde\x02", n));
	printf("\nFuncion  (n = %d): %d\n", n, ft_memcmp("\xff\xaa\xde\xffMACOSX\xff", "\xff\xaa\xde\x02", n));
}

#include "libft.h"
#include <string.h>
#include <stdio.h>

int main()
{
	printf("strnstr : %s\n", strnstr("", "asdf", 100));
	printf("strnstr : %s\n", ft_strnstr("", "asdf", 100));
}

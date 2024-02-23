#include <unistd.h>

void ft_print_alphabet(void)
{
	char	i;
	
	i='a';
	while (i <= 122)
	{
		write(1, &i, 1);
		i++;
	}
}

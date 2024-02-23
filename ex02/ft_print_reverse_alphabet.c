#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
	char	i;

	i='z';
	while (i >= 97)
	{
		write (1, &i, 1);
		i--;
	}
}

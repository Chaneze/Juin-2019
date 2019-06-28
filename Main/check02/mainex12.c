#include <unistd.h>

void	*ft_print_memory(void *addr, unsigned int size);

unsigned int		ft_strlen(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		main(void)
{
	void	*str;

	str = "Bonjour les aminches\n\n\nc est fo u.tout.ce qu on peut faire avec...print_memory....lol.lol. .";
	ft_print_memory(str, ft_strlen(str));
	return (0);
}

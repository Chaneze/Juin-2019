#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(char *str);

int		main(void)
{
	char dest[100];
	char *str;
	int i;
//	int j;

	i = 0;
	str = " ---+---+1234ab567";
	while (str[i] != '\0')
	{
		dest[i] = str[i];
		i++;
	}
//	j = 9;
//	while (j <= 45)
//	{
//		dest[i] = '\0';
//		dest[0] = j;
//		printf("%d\n", atoi(dest));
		printf("%d\n", ft_atoi(dest));
//		j++;
//		if (j == 14)
//			j = 32;
//		if (j == 33)
//			j = 43;
//		if (j == 44)
//			j = 45;
//	}
	return (0);
}

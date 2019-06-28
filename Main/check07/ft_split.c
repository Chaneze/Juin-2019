#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		totalsize(int size, char **strs, char *sep)
{
	int length;
	int i;

	i = 0;
	length = 0;
	while (i <= size && strs[i])
		length += ft_strlen(strs[i++]);
	length += (ft_strlen(sep) * (size - 1));
	return (length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ptr;
	int		i;

	if (size == 0)
	{
		if (!(ptr = malloc(sizeof(char) * 0)))
			return (0);
		*ptr = '\0';
		return (ptr);
	}
	ptr = malloc(sizeof(*ptr) * totalsize(size, strs, sep) + 1);
	if (!(ptr))
		return (0);
	i = 0;
	ptr[0] = '\0';
	while (i <= size && strs[i])
	{
		ft_strcat(ptr, strs[i]);
		i++;
		if (i < size)
			ft_strcat(ptr, sep);
	}
	return (ptr);
}

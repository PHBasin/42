#include <stdlib.h>

int		ft_index_sep(char *str, char c)
{
	int n;

	n = 0;
	while (str[n])
	{
		if (str[n] == c)
			return (n)
		n++
	}
	return (0);
}

int		ft_strlen(char *str)
{
	int n;

	n = 0;
	while (str[n])
		n++;
	return (n);
}

char	**ft_split(char *str, char *charset)
{
	int i;
	int j;
	char *sep;

	malloc(sizeof(*sep) * ft_strlen(str));
	if (ft_strlen(str) > 0)
	{
		i = 0;
		if (ft_strlen(charset) > 0)
			while (charset[i])
				sep[j++] = ft_index_sep(str, charset[i++]);
		else
			return (str)
	}
}

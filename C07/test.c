#include <stdio.h>
#include <stdlib.h>

int		ft_is_sep(char *str, char c)
{
	while (*str)
		if (*str++ == c)
			return (1);
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

int		ft_sep_nbr(char *str, char *charset)
{
	int n;

	n = 0;
	while (*str)
		if (ft_is_sep(charset, *str++))
			n++;
	return (n);
}

char	*ft_index_sep(char *str, char *charset, char *sep)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[j])
	{
		if (ft_is_sep(charset, str[j]))
			sep[i++] = j + 48;
		j++;
	}
	sep[i] = '\0';
	return (sep);
}

int		main(void)
{
	char *str = "--salut---les-amis-";
	char *charset = "la-";
	char *sep;

	printf("STR SIZE = %d\n", ft_strlen(str));
	printf("SEP SIZE = %d\n", ft_sep_nbr(str, charset));

	sep = malloc(sizeof(*sep) * ft_sep_nbr(str, charset));
	sep = ft_index_sep(str, charset, sep);

	while (*sep)
	{
		printf("%d", *sep - 48);
		sep++;
	}
	return (0);
}

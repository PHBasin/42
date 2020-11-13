#include <stdio.h>
#include <stdlib.h>

int		ft_is_sep(char *str, char c)
{
	while (*str)
		if (*str++ == c)
			return (1);
	return (0);
}

int main() {
    char *s1 = "aerldrvdaq";
    
    if (ft_is_sep(s1, 'i'))
	{
		printf("true");
		return (1);
    }
	printf("false");
	return (0);
}

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i;
	i = 0;

	while(str[i] && n > i)
	{
		dest[i] = sr[i];
		i++;
	}

	while(i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest[i]);
}

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	int i;i
	int j;
	i = 0;

	if(to_find[0]i != '\0')
		return(str);


	while(str[i] != '\0')
	{
		j = 0;
		while(str[i + j] == to_find[j])
			j++;
		if(to_find != '\0')
			return (&str[i]);
			i++;
	}
	return (NULL);
}
	

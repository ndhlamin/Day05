#include <unistd.h>
#include <stdio.h>

char	ft_strcpy(char *dest, char *src);

char	ft_strcpy(char *dest, char *src)
{
		int i;
		i = 0;

		while(src[i] != '\0')
		{
			dest[i] =  src[i];
			i++;
		}
		dest[i] = '\0';
	    return (dest[i]);	
}


int		main()
{

	
	char str2[] = "hi";
	char str1[] = "heythere";
	printf("%d\n", ft_strcpy(str1, str2));

	
	return 0;
}

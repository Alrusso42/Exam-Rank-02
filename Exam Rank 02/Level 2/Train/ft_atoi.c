int	ft_atoi(const char *str)
{
	int	i;
	int	signe;
	int	resultat;

	i = 0;
	resultat = 0;
	signe = 1;
	while(((str[i] >= 9 && str[i] <= 13) || str[i] == 32) && str[i] != '\0')
		i++;
	if(str[i] == '-')
	{
		signe *= -1;
		i++;
	}
	else if(str[i] == '+')
		i++;
	while ((str[i] >= '0' && str[i] <= '9') && str[i])
	{
		resultat *= 10;
		resultat += str[i] - '0';
		i++;
	}
	return(resultat * signe);
}

#include <stdio.h>
#include <stdlib.h>

int		main(void)
{
	printf("%d\n", ft_atoi("123456789"));
	printf("%d\n", atoi("123456789"));
	return (0);
}
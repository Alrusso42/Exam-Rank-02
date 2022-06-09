int ft_atoi(const char *str)
{
	int	i;
	int	neg;
	int result;

	i = 0;
	result = 0;
	neg = 1;
	while(((str[i] >= 9 && str[i] <= 13) || str[i] == 32) && str[i])
		i++;
	if(str[i] == '-')
	{
		neg = -1;
		i++;
	}
	else if(str[i] == '+')
		i++;
	while(str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return(result * neg);
}

#include <stdio.h>
#include <stdlib.h>

int		main(void)
{
	printf("%d\n", ft_atoi("123456789"));
	printf("%d\n", atoi("123456789"));
	return (0);
}
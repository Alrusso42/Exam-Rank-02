#include <stdio.h>

int     is_power_of_2(unsigned int n)
{
	if(n % 2 == 0)
		return(1);
	else
		return(2);
}

int	main()
{
	unsigned int n;

	n = 40052;
	printf("%d", is_power_of_2(n));
}
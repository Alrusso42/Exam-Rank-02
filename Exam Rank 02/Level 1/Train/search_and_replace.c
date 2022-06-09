#include <unistd.h>

int main(int argc, char **argv)
{
	int	i;
	char	a;
	char	b;

	i = 0;
	a = argv[2][0];
	b = argv[3][0];
	if (argc == 4)
	{
		if(!argv[2][1] && !argv[3][1])
		{
			while(argv[1][i])
			{
				if(argv[1][i] ==  a)
				{
					argv[1][i] = b;
				}
				write(1, &argv[1][i], 1);
				i++;
			}			
		}
	}
	write(1, "\n", 1);
	return(0);
}
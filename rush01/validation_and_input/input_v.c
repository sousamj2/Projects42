#include <unistd.h>

int	count_numbers(char *str)
{
	int	i;
	int	counter_numbers;

	i = 0;
	counter_numbers = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			counter_numbers++;
		i++;
	}
	return (counter_numbers);
}

int	input_validation(char c, int i, int size_tab)
{
	if (!( c == 32 || (c >= '0' && c <= '0' + size_tab)))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if (i % 2 == 0 && !(c >= '0' && c <= '0' + size_tab))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	else if (i % 2 != 0 && c != 32)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	return (1);
}

int	ft_number_validation(int n)//review
{
	if (n % 4 != 0)
		return (0);
	return (1);

}

int	main(int argc, char **argv)
{
	int	i;
	int	size_tab;

	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	i = 0;
	size_tab = count_numbers(argv[1]);
	if (ft_number_validation(size_tab) == 0)//review
	{
		write(1, "Error\n", 6);
		return (0);
	}
	while (argv[1][i] != '\0')
	{
		if (input_validation(argv[1][i], i, size_tab) == 1)
			return (0);
		i++;
	}
	write(1, "certo\n", 6);
	return (0);
}

#include <unistd.h>
#include <stdlib.h>

void	print_hex_rec(unsigned int n)
{
	char *hex = "0123456789abcdef";

	if (n >= 16)
		print_hex_rec(n / 16);
	write(1, &hex[n % 16], 1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		int n = atoi(argv[1]);
		if (n >= 0)
			print_hex_rec(n);
	}
	write(1, "\n", 1);
	return (0);
}

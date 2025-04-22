#include <unistd.h>

int already_printed(char *str, char c, int pos)
{
	int i = 0;
	while (i < pos)
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int char_in_str(char *str, char c)
{
	int i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int main(int argc, char **argv)
{
	int i = 0;

	if (argc == 3)
	{
		while (argv[1][i])
		{
			if (!already_printed(argv[1], argv[1][i], i)
				&& char_in_str(argv[2], argv[1][i]))
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

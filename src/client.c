#include "../include/minitalk.h"

void	SendSignal(int pid, char c)
{
	int	bit;

	bit = 0;
	while (bit < 8)
	{
		if ((c & (0x01 << bit)))
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(500);
		bit++;
	}
}

int	main(int argc, char **argv)
{
	int	pid;
	int	i;

	i = 0;
	if (argc == 3)
	{
		pid = ft_atoi(argv[1]);
		while (argv[2][i] != '\0')
		{
			SendSignal(pid, argv[2][i]);
			i++;
		}
	}
	else
	{
		ft_printf("Error, try in the following structure ./client pid string\n");
		return (1);
	}
	SendSignal(pid, '\n');

	return (0);
}
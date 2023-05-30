#include "../include/minitalk.h"

void	SigHandler(int sig)
{
	static int	bit = 0;
	static int	c = 0;

	if (sig == SIGUSR1)
	{
		c |= (0x01 << bit);
		bit++;
	}	
	else if(sig == SIGUSR2)
		bit++;
	if (bit == 8)
	{
		ft_printf("%c", c);
		bit = 0;
		c = 0;
	}
}

int	main(int argc, char **argv)
{
	int	pid;

	(void)argv;
	if (argc != 1)
	{
		ft_printf("Error\n");
		return (1);
	}
	pid = getpid();
	ft_printf("%d\n", pid);
	while (argc == 1)
	{
		signal(SIGUSR1, SigHandler);
		signal(SIGUSR2, SigHandler);
		pause ();
	}
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-v <jgomes-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 13:04:27 by jgomes-v          #+#    #+#             */
/*   Updated: 2023/05/31 18:00:07 by jgomes-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minitalk_bonus.h"

void	confirm_msg(int signal, siginfo_t *info, void *context)
{
	(void)context;
	(void)info;
	if (signal == SIGUSR2)
		ft_printf("message recieved\n");
}

void	send_signal(int pid, char c)
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

int	error(void)
{
	ft_printf("Error\n");
	return (-1);
}

int	main(int argc, char **argv)
{
	struct sigaction	sa;
	static int			pid;
	int					i;

	pid = 0;
	i = -1;
	sigemptyset(&sa.sa_mask);
	sa.sa_flags = SA_SIGINFO;
	sa.sa_sigaction = confirm_msg;
	sigaction(SIGUSR2, &sa, NULL);
	if (argc == 3)
	{
		pid = ft_atoi(argv[1]);
		while (argv[2][++i] != '\0')
		{
			send_signal(pid, argv[2][i]);
		}
		send_signal(pid, '\0');
	}
	else
	{
		return (error());
	}
	send_signal(pid, '\n');
	return (0);
}

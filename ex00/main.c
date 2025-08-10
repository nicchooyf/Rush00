/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nichoo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 15:36:02 by nichoo            #+#    #+#             */
/*   Updated: 2025/08/10 13:32:21 by nichoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c);
void	print_box(int col, int row);

/*
*	Checks if inputs are numbers.
*	Returns 1 if TRUE. Returns 0 if FALSE.
*/
int	is_number(char *s)
{
	int	i;

	i = -1;
	while (s[++i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
	}
	return (1);
}

/*
*	Takes a string input and converts it into an integer.
*	Crude implementation.
*/
int	ft_atoi(char *s)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (s[i])
	{
		result *= 10;
		result += s[i] - '0';
		i++;
	}
	return (result);
}

/*
*	Prints ERROR!!!!
*/
void	print_error(void)
{
	write(2, "ERROR!!!", 8);
}

/*
*	Main function
*
*	Takes string arguments from the command line
*	and passes them through ft_atoi to get integers.
*	Sanitizes inputs for 2 arguments, and for arguments to be >= 0.
*/
int	main(int ac, char **av)
{
	int	x;
	int	y;

	if (ac != 3 || !is_number(av[1]) || !is_number(av[2]))
	{
		print_error();
		return (1);
	}
	x = ft_atoi(av[1]);
	y = ft_atoi(av[2]);
	if ((x <= 0) || (y <= 0))
	{
		print_error();
		return (1);
	}
	print_box(x, y);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nichoo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 15:37:02 by nichoo            #+#    #+#             */
/*   Updated: 2025/08/10 13:32:36 by nichoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_putchar(char c);

/*
*	Checks if x and y are at the edges of the box.
*	Returns 1 if TRUE, 0 if FALSE.
*/
int	is_edge(int col, int row, int x, int y)
{
	if ((y == 1) || (y == row) || (x == 1) || (x == col))
		return (1);
	return (0);
}

/*
*	Checks if x and y are at the corners of the box and print
*	the corresponding symbols.
*	Returns 1 and prints the corresponding symbol if TRUE,
*	0 if FALSE.
*/
int	is_corner(int col, int row, int x, int y)
{
	if (x == 1)
	{
		if (y == 1)
			return (ft_putchar('/'));
		if (y == row)
			return (ft_putchar('\\'));
	}
	if (x == col)
	{
		if (y == 1)
			return (ft_putchar('\\'));
		if (y == row)
			return (ft_putchar('/'));
	}
	return (0);
}

/*
*	Calls functions to check if x and y are at corners,
*	then edges, then if neither, prints ' '.
*/
void	print_row(int col, int row, int x, int y)
{
	if (is_corner(col, row, x, y))
		return ;
	if (is_edge(col, row, x, y))
		ft_putchar('*');
	else
		ft_putchar(' ');
}

/*
*	Main handler function to print the box.
*/
void	print_box(int col, int row)
{
	int	x;
	int	y;

	x = 1;
	y = 1;
	while (y <= row)
	{
		while (x <= col)
		{
			print_row(col, row, x, y);
			x++;
		}
		ft_putchar('\n');
		y++;
		x = 1;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nichoo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 15:37:02 by nichoo            #+#    #+#             */
/*   Updated: 2025/08/10 11:59:34 by nichoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

int	first_column_corners(int row, int y)
{
	if (y == 1)
	{
		ft_putchar('/');
		return (1);
	}
	else if (y == row)
	{
		ft_putchar('\\');
		return (1);
	}
	return (0);
}

int	last_column_corners(int row, int y)
{
	if (y == 1)
	{
		ft_putchar('\\');
		return (1);
	}
	else if (y == row)
	{
		ft_putchar('/');
		return (1);
	}
	return (0);
}

int	handle_corners(int col, int row, int x, int y)
{
	if (x == 1)
		return (first_column_corners(row, y));
	if (x == col)
		return (last_column_corners(row, y));
	return (0);
}

void	print_row(int col, int row, int x, int y)
{
	if (handle_corners(col, row, x, y))
		return ;
	if ((y == 1) || (y == row) || (x == 1) || (x == col))
		ft_putchar('*');
	else
		ft_putchar(' ');
}

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

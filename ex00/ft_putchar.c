/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nichoo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 15:36:31 by nichoo            #+#    #+#             */
/*   Updated: 2025/08/10 13:32:27 by nichoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
*	Write function.
*	Returns number of bytes written (aka always 1).
*	Used in adjacent with other boolean functions that
*	always return TRUE when printing.
*/
int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

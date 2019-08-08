/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_green.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcherik <rcherik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/21 15:46:11 by rcherik           #+#    #+#             */
/*   Updated: 2014/03/12 23:23:49 by mdufaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_print_green(char *s)
{
	while (*s)
	{
		write(2, "\033[32m", 5);
		write(2, s++, 1);
		write(2, "\033[0m", 4);
	}
}

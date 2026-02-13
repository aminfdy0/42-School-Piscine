/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdycoding <aminefdy@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 15:47:57 by fdycoding         #+#    #+#             */
/*   Updated: 2026/01/29 15:52:37 by fdycoding        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	first;
	int	last;

	first = '0';
	last = '9';
	while (first <= last)
	{
		write(1, &first, 1);
		first++;
	}
}
/*
int main(void)
{
	ft_print_numbers();
}
*/
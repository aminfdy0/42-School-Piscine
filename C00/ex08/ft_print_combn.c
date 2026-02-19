/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fpcn.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdycoding <aminefdy@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 15:49:50 by fdycoding         #+#    #+#             */
/*   Updated: 2026/02/01 16:06:47 by fdycoding        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_putchar(char fdy)
{
	write(1, &fdy, 1);
}

void	print_array(char v[], int size, int last)
{
	// This function for print arr + last var for ", "
	int	i;

	i = 0;
	while (i < size)
	{
		ft_putchar(v[i]);
		i++;
	}
	if (v[0] != last)
		write(1, ", ", 2);
}

void	ft_print_combn(int n)
{
	char	comb[10]; // Store Comb
	char	max[10]; // Store Last Comb
	int		index;
	int		base;
	int		i;

	i = 0;
	while (i < n)
	{
		comb[i] = i + 48; // store first comb | n = 3 -> 012
		max[i] = (10 - n) + i + 48; // store first comb | n = 3 -> 789
		i++;
	}
	print_array(comb, n, max[0]);
	while (comb[0] != max[0])
	{
		index = n - 1; // start checking from right side
		while (comb[index] == max[index]) // if digit reached its max
			--index; // move left
		base = ++(comb[index]); // increase that digit by 1
		while (index < n) // rebuild digits on the righ
			comb[index++] = base++;
		print_array(comb, n, max[0]);
	}
}

int	main(void)
{
	// ft_print_combn(2);
	// printf("\n\n");
	// ft_print_combn(5);
	// printf("\n\n");
	// ft_print_combn(9);
}

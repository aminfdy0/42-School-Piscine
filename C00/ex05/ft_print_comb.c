uno/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdycoding <aminefdy@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 16:34:44 by fdycoding         #+#    #+#             */
/*   Updated: 2026/01/29 16:49:24 by fdycoding        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	uno;
	char	dos;
	char	tres;

	uno = '0';
	while (uno <= '7')
	{
		dos = uno + 1;
		while (dos <= '8')
		{
			tres = dos + 1;
			while (tres <= '9')
			{
				ft_putchar(uno);
				ft_putchar(dos);
				ft_putchar(tres);
				if (uno != '7')
					write(1, " ,", 2);
				tres++;
			}
			dos++;
		}
		uno++;
	}
}
/*
int main(void)
{
	ft_print_comb();
}
*/

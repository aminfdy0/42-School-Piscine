/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdycoding <aminefdy@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 15:34:36 by fdycoding         #+#    #+#             */
/*   Updated: 2026/02/21 15:36:42 by fdycoding        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0') 
	{
		write(1, &str[i], 1);
		i++;
	}
}
/*
int main(void)
{
	char	name[] = "FeDaYee";
	ft_putstr(name);
}
*/
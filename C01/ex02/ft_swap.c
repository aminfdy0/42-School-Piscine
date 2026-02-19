/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdycoding <aminefdy@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 15:23:25 by fdycoding         #+#    #+#             */
/*   Updated: 2026/02/19 16:41:48 by fdycoding        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swp;

	swp = *a;
	*a = *b;
	*b = swp;
}
/*
int main()
{
    int ac = 13, ab = 12;
    int *Pac = &ac, *Pab = &ab;
    ft_swap(Pac, Pab);
    printf("%i%i\n", ab, ac);
}
*/

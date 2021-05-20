/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscalisi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 09:56:25 by gscalisi          #+#    #+#             */
/*   Updated: 2021/03/01 10:07:01 by gscalisi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int n;

	n = 1;
	if (nb < 0)
		return (0);
	while (nb)
	{
		n *= nb;
		nb--;
	}
	return (n);
}

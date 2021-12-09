/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avagnare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 10:09:25 by avagnare          #+#    #+#             */
/*   Updated: 2021/12/01 10:17:26 by avagnare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	c;
	int	s;

	a = 0;
	c = 0;
	while (c < size)
	{
		a = 0;
		b = 1;
		while (b < size - 1)
		{
			b = a + 1;
			if (tab[a] > tab[b])
			{
				s = tab[a];
				tab[a] = tab[b];
				tab[b] = s;
			}
			a++;
		}
		c++;
	}
}

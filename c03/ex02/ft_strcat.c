/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avagnare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 11:56:12 by avagnare          #+#    #+#             */
/*   Updated: 2021/12/09 09:46:03 by avagnare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	k;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	k = 0;
	while (src[k] != '\0')
	{
		dest[i] = src[k];
		k++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

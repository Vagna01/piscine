/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avagnare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 14:57:47 by avagnare          #+#    #+#             */
/*   Updated: 2021/12/03 10:09:26 by avagnare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int    check(char c)
{
    if ((c <= 47) || (c <= 64 && c >= 58) || (c <= 96 && c >= 91) || (c >= 123))
    {
        return (1);
    }
    return (0);
}

char    *ft_strcapitalize(char *str)
{
    int    i;

    i = 0;
    if (str[0] <= 'z' && str[0] >= 'a')
        str[i] = str[i] - 32;
    i = 1;
    while (str[i] != '\0')
    {
        if (check (str[i - 1]))
        {
            if (str[i] <= 'z' && str[i] >= 'a')
                str[i] = str[i] - 32;
            else
                i++;
        }
        else
        {
            if (str[i] <= 'Z' && str[i] >= 'A')
                str[i] = str[i] + 32;
            else
                i++;
        }
    }
    return (str);
}

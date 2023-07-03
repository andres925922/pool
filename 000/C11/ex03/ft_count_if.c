/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubonill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 16:44:13 by jubonill          #+#    #+#             */
/*   Updated: 2020/10/27 13:15:22 by jubonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int length, int (*f)(char*))
{
	int i;
	int c;

	c = 0;
	i = 0;
	while (i < length)
	{
		if ((*f)(tab[i]))
			c++;
		i++;
	}
	return (c);
}
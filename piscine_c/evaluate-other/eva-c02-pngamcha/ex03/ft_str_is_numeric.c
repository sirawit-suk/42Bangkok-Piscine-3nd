/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pngamcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 19:25:02 by pngamcha          #+#    #+#             */
/*   Updated: 2022/01/19 19:10:12 by pngamcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	check;
	int	i;

	i = 0;
	if (str[0] == '\0')
	{
		check = 1;
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 48 && str[i] <= 57)
		{
			check = 1;
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (check);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akajitam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 00:10:22 by akajitam          #+#    #+#             */
/*   Updated: 2022/01/26 18:42:12 by akajitam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*buff;

	buff = dest;
	while (*buff != '\0')
	{
		buff++;
	}
	while (*src != '\0')
	{
		*buff = *src;
		buff++;
		src++;
	}
	*buff = '\0';
	return (dest);
}

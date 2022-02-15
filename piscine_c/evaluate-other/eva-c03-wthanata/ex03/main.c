/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wthanata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 21:19:28 by wthanata          #+#    #+#             */
/*   Updated: 2022/01/20 10:11:25 by wthanata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char	dest[50] = "Hello";
	char	src[50] = " World";
	char	a[50] = "Hello";
	char	b[50] = " World";
	char	*c;
	char	*d;

	c = ft_strncat(dest, src, 3);
	d = strncat(a, b, 3);
	printf("ft_strncat = %s\n", c);
	printf("strncat result = %s\n", d);
}	

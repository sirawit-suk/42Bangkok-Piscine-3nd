/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpengnit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 00:30:34 by kpengnit          #+#    #+#             */
/*   Updated: 2022/01/21 00:38:33 by kpengnit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	int	len;

	len = ft_strlen("We are the world!!");
	printf("%d\n", len);
}

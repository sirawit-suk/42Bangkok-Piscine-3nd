/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssukwatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 17:22:12 by ssukwatt          #+#    #+#             */
/*   Updated: 2022/01/24 17:24:56 by ssukwatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	argc--;
	while (argc >= 1)
	{
		while (*argv[argc] != '\0')
		{
			write(1, argv[argc], 1);
			argv[argc]++;
		}
		argc--;
		write(1, "\n", 1);
	}
}

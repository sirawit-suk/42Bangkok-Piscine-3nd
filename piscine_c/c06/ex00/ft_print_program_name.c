/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssukwatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 17:05:38 by ssukwatt          #+#    #+#             */
/*   Updated: 2022/01/24 17:11:32 by ssukwatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int a, char *ar[])
{
	a = 0;
	while (*ar[0] != '\0')
	{
		write(1, ar[0], 1);
		ar[0]++;
	}
	write(1, "\n", 1);
}

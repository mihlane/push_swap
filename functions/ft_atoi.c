/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 13:47:01 by mhabibi-          #+#    #+#             */
/*   Updated: 2022/06/22 11:23:12 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	check_val(long val)
{
	if (val < -2147483649 || val > 2147483647)
	{
		write(1, "Error\n", 6);
		exit(0);
	}
}

void	ft_exit_0(void)
{
	write(1, "Error\n", 6);
	exit(0);
}

int	ft_atoi(const char *str)
{
	int		sign;
	long	result;
	int		count;

	result = 0;
	sign = 1;
	count = 0;
	if (!*str)
		ft_exit_0();
	while ((*str == 32) || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		sign = sign * -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result = (result * 10) + (*str - '0');
		str++;
		count++;
	}
	if ((result * sign) < -2147483648 || (result * sign) > 2147483647)
		ft_exit_0();
	return (result * sign);
}

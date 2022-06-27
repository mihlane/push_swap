/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_duplicate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 22:51:17 by mhabibi-          #+#    #+#             */
/*   Updated: 2022/06/22 05:12:03 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_duplicate(t_stack *t_stack_a)
{
	int	i;
	int	j;

	i = 0;
	while (i < t_stack_a->top)
	{
		j = i + 1;
		while (j < t_stack_a->top)
		{
			if (t_stack_a->numbers[i] == t_stack_a->numbers[j])
			{
				write(1, "Error\n", 6);
				exit(1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

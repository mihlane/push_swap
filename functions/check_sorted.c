/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 00:12:19 by mhabibi-          #+#    #+#             */
/*   Updated: 2022/06/22 11:06:58 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_sort(t_stack *stack_a)
{
	int	i;

	i = 0;
	while (i < stack_a->top - 1)
	{
		if (stack_a->numbers[i] < stack_a->numbers[i + 1])
			return (1);
		i++;
	}
	return (0);
}

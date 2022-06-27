/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rot_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 23:59:42 by mhabibi-          #+#    #+#             */
/*   Updated: 2022/06/22 05:06:29 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rev_rot_a(t_stack *stack_a, int j)
{
	int	tmp;
	int	i;

	i = 0;
	tmp = stack_a->numbers[i];
	while (i < stack_a->top)
	{
		stack_a->numbers[i - 1] = stack_a->numbers[i];
		i++;
	}
	stack_a->numbers[stack_a->top - 1] = tmp;
	if (j == 1)
		write(1, "rra\n", 4);
}

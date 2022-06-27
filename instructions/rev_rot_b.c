/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rot_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 00:07:33 by mhabibi-          #+#    #+#             */
/*   Updated: 2022/06/22 05:06:39 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rev_rot_b(t_stack *stack_b, int j)
{
	int	tmp;
	int	i;

	i = 0;
	tmp = stack_b->numbers[i];
	while (i < stack_b->top)
	{
		stack_b->numbers[i - 1] = stack_b->numbers[i];
		i++;
	}
	stack_b->numbers[stack_b->top - 1] = tmp;
	if (j == 1)
		write(1, "rrb\n", 4);
}

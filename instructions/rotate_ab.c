/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_ab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 23:03:56 by mhabibi-          #+#    #+#             */
/*   Updated: 2022/06/22 05:06:52 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate_ab(t_stack *stack_a, t_stack *stack_b, int j)
{
	int	tmp;
	int	i;

	i = stack_a->top;
	tmp = stack_a->numbers[stack_a->top];
	while (i > 0)
	{
		stack_a->numbers[i] = stack_a->numbers[i - 1];
		i--;
	}
	stack_a->numbers[stack_a->top] = tmp;
	i = stack_b->top;
	tmp = stack_b->numbers[stack_b->top];
	while (i > 0)
	{
		stack_b->numbers[i] = stack_b->numbers[i - 1];
		i--;
	}
	stack_b->numbers[stack_b->top] = tmp;
	if (j == 1)
		write(1, "rr\n", 3);
}

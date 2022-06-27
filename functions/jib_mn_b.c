/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   jib_mn_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 14:59:03 by mhabibi-          #+#    #+#             */
/*   Updated: 2022/06/22 05:09:29 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	find_big_numb(t_stack *stack_b)
{
	int	top;
	int	i;

	i = 0;
	top = stack_b->top - 1;
	while (i <= top)
	{
		if (stack_b->numbers[i] == top)
			return (i);
		i++;
	}
	return (-1);
}

void	ft_kml2(t_stack *stack_a, t_stack *stack_b, int j)
{
	while (j >= 0)
	{
		rev_rot_b(stack_b, 1);
		j--;
	}
	push_a(stack_a, stack_b, 1);
}

int	jib_mn_b(t_stack *stack_a, t_stack *stack_b)
{
	int	j;

	while (stack_b->top > 0)
	{
		j = find_big_numb(stack_b);
		if (j >= ((stack_b->top - 1) / 2))
		{
			j = stack_b->top - j - 1;
			while (j > 0)
			{
				rotate_b(stack_b, 1);
				j--;
			}
			push_a(stack_a, stack_b, 1);
		}
		else if (j < ((stack_b->top - 1) / 2))
			ft_kml2(stack_a, stack_b, j);
	}
	return (0);
}

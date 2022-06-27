/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 05:46:49 by mhabibi-          #+#    #+#             */
/*   Updated: 2022/06/24 13:43:36 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_find_min(t_stack *stack_a)
{
	int	i;
	int	min;
	int	j;

	i = 0;
	j = 0;
	min = stack_a->numbers[i];
	while (i < stack_a->top)
	{
		if (stack_a->numbers[i] < min)
		{
			min = stack_a->numbers[i];
			j = i;
		}
		i++;
	}
	return (j);
}

void	ft_kml(t_stack *stack_a, t_stack *stack_b, int j)
{
	while (j >= 0)
	{
		rev_rot_a(stack_a, 1);
		j--;
	}
	push_b(stack_b, stack_a, 1);
}

int	jib_mn_aa(t_stack *stack_a, t_stack *stack_b)
{
	int	j;

	while (stack_a->top > 3)
	{
		j = ft_find_min(stack_a);
		if (j == stack_a->top - 1)
			push_b(stack_b, stack_a, 1);
		else if (j == stack_a->top - 2)
		{
			rotate_a(stack_a, 1);
			push_b(stack_b, stack_a, 1);
		}
		else if (j == stack_a->top - 3)
		{
			rotate_a(stack_a, 1);
			rotate_a(stack_a, 1);
			push_b(stack_b, stack_a, 1);
		}
		else if (j < 2 && j != -1)
			ft_kml(stack_a, stack_b, j);
	}
	return (0);
}

void	sort_5(t_stack *stack_a, t_stack *stack_b)
{
	sort_array(stack_a);
	jib_mn_aa(stack_a, stack_b);
	sort_3(stack_a);
	while (stack_b->top > 0)
		push_a(stack_a, stack_b, 1);
}

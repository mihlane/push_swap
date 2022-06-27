/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_2b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 18:33:04 by mhabibi-          #+#    #+#             */
/*   Updated: 2022/06/22 05:04:31 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	get_div(int y, int j)
{
	if (y > 200)
		j = 6;
	else if (y > 50 && y <= 200)
		j = 4;
	else if (y > 15 && y <= 50)
		j = 3;
	else
		return (1);
	return (j);
}

void	smart_push(t_stack *stack_a, t_stack *stack_b, int z, int p)
{
	if (stack_a->numbers[stack_a->top - 1] > ((z + p) / 2))
	{
		push_b(stack_b, stack_a, 1);
		rotate_b(stack_b, 1);
	}
	else
		push_b(stack_b, stack_a, 1);
}

void	all_2b(t_stack *stack_a, t_stack *stack_b)
{
	int	m;
	int	p;
	int	z;
	int	j;

	j = 6;
	m = stack_a->top - 1;
	z = m / j;
	p = 0;
	while (stack_a->top > 0)
	{
		if (stack_a->numbers[stack_a->top - 1] <= z)
			smart_push(stack_a, stack_b, z, p);
		else
			rotate_a(stack_a, 1);
		if (stack_b->top - 1 == z)
		{
			j = get_div(stack_a->top - 1, j);
			p = z;
			z += (stack_a->top - 1) / j + 1;
		}
	}
}

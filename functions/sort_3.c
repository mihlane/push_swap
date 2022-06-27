/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 16:12:48 by mhabibi-          #+#    #+#             */
/*   Updated: 2022/06/22 10:45:21 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_3(t_stack *stack_a)
{
	int	a;
	int	b;
	int	c;

	rotate_a(stack_a, 1);
	while (check_sort(stack_a) != 0)
	{
		a = stack_a->numbers[stack_a->top - 1];
		b = stack_a->numbers[stack_a->top - 2];
		c = stack_a->numbers[stack_a->top - 3];
		if (a < b && b > c)
			rev_rot_a(stack_a, 1);
		else if (a > b && a > c)
			rotate_a(stack_a, 1);
		else if (a > b)
			sa(stack_a, 1);
	}
}

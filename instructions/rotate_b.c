/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 23:02:15 by mhabibi-          #+#    #+#             */
/*   Updated: 2022/06/22 05:06:55 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate_b(t_stack *stack_b, int j)
{
	int	tmp;
	int	i;

	i = stack_b->top - 1;
	tmp = stack_b->numbers[stack_b->top - 1];
	while (i >= 0)
	{
		stack_b->numbers[i] = stack_b->numbers[i - 1];
		i--;
	}
	stack_b->numbers[0] = tmp;
	if (j == 1)
		write(1, "rb\n", 3);
}

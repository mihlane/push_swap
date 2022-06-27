/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 22:48:18 by mhabibi-          #+#    #+#             */
/*   Updated: 2022/06/22 05:06:42 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate_a(t_stack *stack_a, int j)
{
	int	tmp;
	int	i;

	i = stack_a->top - 1;
	tmp = stack_a->numbers[stack_a->top - 1];
	while (i >= 0)
	{
		stack_a->numbers[i] = stack_a->numbers[i - 1];
		i--;
	}
	stack_a->numbers[0] = tmp;
	if (j == 1)
		write(1, "ra\n", 3);
}

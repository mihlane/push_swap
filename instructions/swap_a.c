/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 18:15:02 by mhabibi-          #+#    #+#             */
/*   Updated: 2022/06/22 05:07:01 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_stack *stack_a, int i)
{
	int	tem;

	tem = stack_a->numbers[stack_a->top - 1];
	stack_a->numbers[stack_a->top - 1] = stack_a->numbers[stack_a->top - 2];
	stack_a->numbers[stack_a->top - 2] = tem;
	if (i == 1)
		write(1, "sa\n", 3);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 22:04:14 by mhabibi-          #+#    #+#             */
/*   Updated: 2022/06/22 05:06:07 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_a(t_stack *stack_a, t_stack *stack_b, int i)
{
	push(stack_a, stack_b->numbers[stack_b->top - 1]);
	stack_b->top--;
	if (i == 1)
		write(1, "pa\n", 3);
}

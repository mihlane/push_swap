/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 22:24:45 by mhabibi-          #+#    #+#             */
/*   Updated: 2022/06/26 04:55:48 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_b(t_stack *stack_b, t_stack *stack_a, int i)
{
	push(stack_b, stack_a->numbers[stack_a->top - 1]);
	stack_a->top--;
	if (i == 1)
		write(1, "pb\n", 3);
}

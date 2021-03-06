/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 18:22:58 by mhabibi-          #+#    #+#             */
/*   Updated: 2022/06/22 05:06:22 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push(t_stack *stack, int nb)
{
	stack->numbers[stack->top] = nb;
	stack->top++;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 17:55:52 by mhabibi-          #+#    #+#             */
/*   Updated: 2022/06/27 03:18:49 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = malloc(sizeof(t_stack));
	stack_b = malloc(sizeof(t_stack));
	stack_b->numbers = malloc(sizeof(int) * (ac - 1));
	if (!stack_b)
		return (0);
	inisialize(argv, ac, stack_a);
	if (check_sort(stack_a) && stack_b->top == 0)
	{
		if (ac > 2 && ac < 5)
			sort_3(stack_a);
		else if (ac >= 5 && ac <= 6)
			sort_5(stack_a, stack_b);
		else if (ac > 6)
		{
			sort_array(stack_a);
			all_2b(stack_a, stack_b);
			jib_mn_b(stack_a, stack_b);
		}
	}
}

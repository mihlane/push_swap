/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_array.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 15:06:51 by mhabibi-          #+#    #+#             */
/*   Updated: 2022/06/22 11:11:34 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	*ft_index_stack(t_stack *stack_a, int *array)
{
	int	i;
	int	j;
	int	*arr;

	i = 0;
	j = 0;
	arr = malloc(sizeof(int) * stack_a->top);
	if (!arr)
		return (0);
	while (i < stack_a->top)
	{
		j = 0;
		while (j < stack_a->top)
		{
			if (array[i] == stack_a->numbers[j])
			{
				arr[j] = i;
			}
			j++;
		}
		i++;
	}
	free(array);
	return (arr);
}

int	*sort_inside(t_stack *stack_a, int *array)
{
	int	j;
	int	c;
	int	i;

	i = 0;
	while (i < stack_a->top)
	{
		j = i + 1;
		while (j < stack_a->top)
		{
			if (array[i] > array[j])
			{
				c = array[i];
				array[i] = array[j];
				array[j] = c;
				j--;
			}
			j++;
		}
		i++;
	}
	return (array);
}

int	*sort_array(t_stack *stack_a)
{
	int	*array;
	int	j;

	j = 0;
	array = malloc(sizeof(int) * stack_a->top);
	while (j < stack_a->top)
	{
		array[j] = stack_a->numbers[stack_a->top - j - 1];
		j++;
	}
	array = sort_inside(stack_a, array);
	array = ft_index_stack(stack_a, array);
	j = 0;
	while (j < stack_a->top)
	{
		stack_a->numbers[j] = array[j];
		j++;
	}
	free(array);
	return (0);
}

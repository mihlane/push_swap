/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 16:57:57 by mhabibi-          #+#    #+#             */
/*   Updated: 2022/06/22 11:20:03 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_hard_code(char *str, t_stack *stack_a, t_stack *stack_b)
{
	if (ft_strcmp(str, "ss\n") == 0)
		ss(stack_a, stack_b, 0);
	else if (ft_strcmp(str, "ra\n") == 0)
		rotate_a(stack_a, 0);
	else if (ft_strcmp(str, "rb\n") == 0)
		rotate_b(stack_b, 0);
	else if (ft_strcmp(str, "rr\n") == 0)
		rotate_ab(stack_a, stack_b, 0);
	else if (ft_strcmp(str, "rra\n") == 0)
		rev_rot_a(stack_a, 0);
	else if (ft_strcmp(str, "rrb\n") == 0)
		rev_rot_b(stack_b, 0);
	else if (ft_strcmp(str, "rrr\n") == 0)
		rev_rot_ab(stack_a, stack_b, 0);
	else if (ft_strcmp(str, "pb\n") == 0)
		push_b(stack_b, stack_a, 0);
	else if (ft_strcmp(str, "pa\n") == 0)
		push_a(stack_a, stack_b, 0);
	else
	{
		write(1, "Error\n", 6);
		exit (0);
	}
}

int	ft_norm(t_stack *stack_a, t_stack *stack_b, char **argv, int ac)
{
	stack_b->numbers = malloc(sizeof(int) * (ac - 1));
	if (!stack_b)
		return (0);
	inisialize(argv, ac, stack_a);
	return (0);
}

int	main(int ac, char **argv)
{
	char	*str;
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = malloc(sizeof(t_stack));
	stack_b = malloc(sizeof(t_stack));
	ft_norm(stack_a, stack_b, argv, ac);
	str = get_next_line(0);
	while (str)
	{
		if (ft_strcmp(str, "sa\n") == 0)
			sa(stack_a, 0);
		else if (ft_strcmp(str, "sb\n") == 0)
			sb(stack_b, 0);
		else
			ft_hard_code(str, stack_a, stack_b);
		free(str);
		str = get_next_line(0);
	}
	if (check_sort(stack_a) == 0 && stack_b->top == 0)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}

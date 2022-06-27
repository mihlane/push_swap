/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inisialize.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 16:23:29 by mhabibi-          #+#    #+#             */
/*   Updated: 2022/06/24 13:44:11 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_exit0(void)
{
	write(1, "Error\n", 6);
	exit(0);
}

void	check_numeric(char **argv, int ac)
{
	int	i;
	int	j;

	i = ac - 1;
	while (i > 0)
	{
		j = 0;
		while (argv[i][j])
		{	
			if ((argv[i][j] < 48 || argv[i][j] > 57)
			&& ((argv[i][j] != '-') && (argv[i][j] != '+')))
				ft_exit0();
			else if (argv[i][j] == '-' || argv[i][j] == '+')
			{
				if (argv[i][j + 1] == '-' || argv[i][j + 1] == '+'
				|| argv[i][j + 1] == '\0')
					ft_exit0();
			}
			j++;
		}
		i--;
	}
}

int	inisialize(char **argv, int ac, t_stack *stack_a)
{
	int		i;
	long	val;
	int		z;

	stack_a->numbers = malloc(sizeof(int) * (ac - 1));
	if (!stack_a)
		return (0);
	stack_a->top = 0;
	z = -42;
	i = ac - 1;
	check_numeric(argv, ac);
	while (i > 0)
	{
		val = ft_atoi(argv[i]);
		push(stack_a, val);
		i--;
	}
	check_duplicate(stack_a);
	stack_a->size_a = stack_a->top - 1;
	return (0);
}

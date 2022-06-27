/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 18:02:15 by mhabibi-          #+#    #+#             */
/*   Updated: 2022/06/26 04:54:35 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H

# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

typedef struct stack
{
	int	top;
	int	*numbers;
	int	size_a;
}t_stack;

int		inisialize(char **argv, int ac, t_stack *stack_a);
int		ft_atoi(const char *str);
void	push(t_stack *stack, int nb);
void	sa(t_stack *stack_a, int i);
void	sort_3(t_stack *stack_a);
void	sb(t_stack *stack_b, int i);
void	ss(t_stack *stack_a, t_stack *stack_b, int i);
void	rotate_b(t_stack *stack_b, int j);
void	rotate_a(t_stack *stack_a, int i);
void	rev_rot_b(t_stack *stack_b, int j);
void	rev_rot_ab(t_stack *stack_a, t_stack *stack_b, int j);
void	rev_rot_a(t_stack *stack_a, int j);
void	push_b(t_stack *stack_b, t_stack *stack_a, int i);
void	push_a(t_stack *stack_a, t_stack *stack_b, int i);
int		check_sort(t_stack *stack_a);
int		check_duplicate(t_stack *stack_a);
int		*sort_array(t_stack *stack_a);
void	all_2b(t_stack *a, t_stack *b);
int		jib_mn_b(t_stack *stack_a, t_stack *stack_b);
char	*get_next_line(int fd);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strchr(char *s, int c);
size_t	ft_strlen(char *s);
void	rotate_ab(t_stack *stack_a, t_stack *stack_b, int j);
void	sort_5(t_stack *stack_a, t_stack *stack_b);

#endif

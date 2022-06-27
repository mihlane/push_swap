NAME  = push_swap

SRCS  = functions/ft_atoi.c \
        functions/ft_inisialize.c \
        instructions/push.c \
        instructions/swap_a.c \
        instructions/push_a.c \
        instructions/push_b.c \
        instructions/rev_rot_a.c \
        instructions/rev_rot_b.c\
        instructions/rev_rot_ab.c \
        instructions/rotate_a.c\
        instructions/rotate_b.c\
        instructions/rotate_ab.c\
        instructions/swap_b.c \
	      instructions/swap_s.c\
        functions/check_sorted.c \
        functions/check_duplicate.c\
        functions/sort_array.c\
        functions/all_2b.c \
        functions/jib_mn_b.c \
        functions/sort_5.c \
        functions/sort_3.c\

MANDATOR = main.c \
    

BNS =   bonus/get_next_line.c \
    bonus/get_next_line_utils.c \
    bonus/checker.c \

CC = @cc

FLAGS = -Wall -Wextra -Werror

OBJS = $(SRCS:.c=.o)
MANDATOR_O = $(MANDATOR:.c=.o)
BNS_O = $(BNS:.c=.o)
NAME_O = checker

all : $(NAME)
$(NAME) : $(OBJS) $(MANDATOR_O)
	@$(CC) $(FLAGS) $(OBJS) $(MANDATOR_O) -o $(NAME)
	@echo "push swap is ready"

bonus : $(NAME_O)

$(NAME_O) : $(BNS_O) $(OBJS)
	@$(CC) $(FLAGS) $(BNS_O) $(OBJS) -o $(NAME_O)
clean :
	@rm -f $(OBJS) $(BNS_O)
fclean : clean
	@rm -f $(NAME) $(NAME_O) $(MANDATOR_O)
bclean : clean
	@rm -f $(NAME_O)
re : fclean all
bre : bclean bonus
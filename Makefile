CC ?= cc
CC_FLAGS = -Wall -Wextra -Werror -g -O0
RM := rm -f

LIBFT := libft
LIBFT_ARCHIVE := $(LIBFT)/libft.a

NAME = push_swap

SRC_DIR = src
OPS_DIR = src/ops
STACK_DIR = src/stack
SORT_DIR = src/sort
PARSER_DIR = src/parser

SRCS = $(OPS_DIR)/ops_base.c $(OPS_DIR)/op_push.c $(OPS_DIR)/op_rotate.c \
	   $(OPS_DIR)/op_swap.c $(OPS_DIR)/op_reverse_rotate.c $(SRC_DIR)/push_swap.c \
	   $(PARSER_DIR)/parser_utils.c $(PARSER_DIR)/parser.c \
	   $(SORT_DIR)/sort_utils.c $(SORT_DIR)/sort.c \
	   $(STACK_DIR)/stack.c  $(STACK_DIR)/list_utils.c
	
OBJS = $(SRCS:%.c=%.o)

%.o: %.c
	$(CC) $(CC_FLAGS) -c $< -o $@

$(NAME): $(OBJS) $(LIBFT_ARCHIVE)
	$(CC) $(CC_FLAGS) $(LIBFT_ARCHIVE) $^ -o $(NAME)

all: $(NAME)

$(LIBFT_ARCHIVE): 
	@make -C $(LIBFT)

clean: 
	@make clean -C $(LIBFT)
	$(RM) $(OBJS)

fclean: clean
	@make fclean -C $(LIBFT)
	$(RM) $(NAME)                                                                                       

re: fclean all

.PHONY: all clean fclean re $(LIBFT_ARCHIVE)
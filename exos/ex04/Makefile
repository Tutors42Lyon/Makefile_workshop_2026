SRCS := count_number.c \
        main.c \
        print_hello.c

SRCSDIR = srcs/
OBJSDIR = objs/
INCLUDES = -I includes
SRCS := $(addprefix $(SRCSDIR), $(SRCS))


OBJS := $(SRCS:$(SRCSDIR)%.c=$(OBJSDIR)%.o)

NAME = test

all: $(NAME)

$(OBJSDIR):
	mkdir -p $@

$(NAME): $(OBJS)
	cc $^ -o $@

$(OBJSDIR)%.o: $(SRCSDIR)%.c  $(OBJSDIR)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -rf $(OBJSDIR)

fclean: clean
	rm -f $(NAME)
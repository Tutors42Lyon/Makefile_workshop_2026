SRCSu := count_number.c \
        print_hello.c
        
SRCSm := main.c 

SRCSDIR = srcs/
SRCSDIRm = main/
SRCSDIRu = utils/
OBJSDIR = objs/
INCLUDES = -I includes
SRCS := $(addprefix $(SRCSDIR)$(SRCSDIRu), $(SRCSu)) \
		$(addprefix $(SRCSDIR)$(SRCSDIRm), $(SRCSm))

OBJS = $(subst $(SRCSDIR), $(OBJSDIR), $(SRCS:.c=.o))

NAME = test

all: $(NAME)


$(NAME): $(OBJS)
	cc $^ -o $@

$(OBJSDIR)%.o: $(SRCSDIR)%.c 
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -rf $(OBJSDIR)

fclean: clean
	rm -f $(NAME)
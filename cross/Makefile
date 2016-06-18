CC= gcc
INC_DIR= inc
SRC_DIR= src
CFLAGS= -Wall -Werror -pedantic -Wextra -I.
SRC= $(SRC_DIR)/print_rows.c $(SRC_DIR)/cross.c $(SRC_DIR)/use_func.c
DEPS= $(INC_DIR)/cross_functions.h
OBJS= $(SRC:.c=.o)
TARGET= crossed

all: $(TARGET)

$(TARGET): $(OBJS) $(DEPS)
	$(CC) $(OBJS) $(DEPS) -o $(TARGET)

clean:
	rm -f $(OBJS)
	rm -f $(TARGET)

re: clean all	

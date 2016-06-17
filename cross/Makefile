CC=gcc
CFLAGS= -Wall -Werror -pedantic -Wextra
DEPS= cross_functions.h
OBJ= %.o
EXEC= crossed

all: $(EXEC)

%.o: %.c $(DEPS)
	$(CC) -c -o $ $@ $< $(CFLAGS)

$(EXEC): $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

clean:
	-rm -f $(OBJ)
	-rm -f $(EXEC)

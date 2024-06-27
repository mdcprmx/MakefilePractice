USUAL_FLAGS = -Wall -Wextra -Werror -std=c11 -pedantic

SRC = $(wildcard s21_*.c)
OBJ = $(SRC:.c=.o)

all: clean mkfp

%.o: %.c
	gcc $(USUAL_FLAGS) -c $< -o $@

mkfp: %(OBJ)
	ar rcs mkfp.a $(OBJ)

clean:
	rm -rf *.out
	rm -rf *.o



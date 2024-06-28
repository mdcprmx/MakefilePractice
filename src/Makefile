USUAL_FLAGS = -Wall -Wextra -Werror -std=c11 -pedantic

SRC = $(wildcard s21_*.c)
OBJ = $(SRC:.c=.o)

all: clean s21_project.a 

%.o: %.c
	gcc $(USUAL_FLAGS) -c $< -o $@

s21_project.a: $(OBJ)
	ar rc $@ $(OBJ)


# ________________________________________________
#	So, what this target at line 8 (%.o: %.c] does?
#    $@: The filename representing the target.
#    $%: The filename element of an archive member specification.
#    $<: The filename of the first prerequisite.
# ________________________________________________



# ________________________________________________
# btw, this code is above is basically the same as this one below

FLAGS = -Wall -Wextra -Werror

OBJECT = s21_aaaa.o s21_bbbb.o s21_dance.o

all2: clean s21_piroject.a

compile: 
	gcc $(FLAGS) -c s21_aaaa.c -o s21_aaaa.o 
	gcc $(FLAGS) -c s21_bbbb.c -o s21_bbbb.o 
	gcc $(FLAGS) -c s21_dance.c -o s21_dance.o 

s21_piroject.a: compile
	ar rc s21_piroject.a $(OBJECT)





clean:
	rm -rf *.o
	rm -rf *.a